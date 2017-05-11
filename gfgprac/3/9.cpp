#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x=0;
		while(n){
			x+=(n%2);
			n/=2;
		}
		cout<<x<<endl;
	}
	return 0;
}
