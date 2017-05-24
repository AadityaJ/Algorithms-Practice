#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>
#define MX 10000
using namespace std;
int dp[MX][MX];
void init(){
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j]=-1;
		}
	}
}
int calc(int n,int k){
	if(k==0 || k==1) return 1;
	if(n==1) return k;
	if(dp[n][k]!=-1) return dp[n][k];
	int mn=INT_MAX;
	for(int i=1;i<=k;i++){
		mn=min(mn,max(calc(n-1,i-1),calc(n,k-i)));
	}
	return dp[n][k]=mn+1;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int n,k;
		cin>>n>>k;
		cout<<calc(n,k)<<endl;
	}
	return 0;
}
