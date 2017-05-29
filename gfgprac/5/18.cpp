#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long ans=1;
		long long d=2;
		while(n>1){
			while(n%d==0){
				n/=d;
				ans=d;
			}
			d=d+1;
			if(d*d>n){
				if(n>1) {ans=n;break;}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
