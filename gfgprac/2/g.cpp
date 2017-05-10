#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isPrime[1000001];
void seive(){
	for(long long int i=2;i<1000001;i++){
		if(isPrime[i]==0){
			for(long long int j=i*2;j<1000001;j=j+i){
				isPrime[j]=1;
			}
		}
	}
}
int main(int argc, char const *argv[]) {
	seive();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int sum=0;
		for(long long int i=2;i<=n;i++){
			if(isPrime[i]==0) sum+=i;
		}
		cout<<sum<<endl;
	}
	return 0;
}
