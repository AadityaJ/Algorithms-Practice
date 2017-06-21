#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define MX 10001
using namespace std;
int dp[MX][MX];
int f(int a,int b,int sum,int i){
	if(sum>=a) return sum==a;
	if(i>a) return 0;
	if(dp[sum][i]!=-1) return dp[sum][i];
	return dp[sum][i]=f(a,b,sum+pow(i,b),i+1)+f(a,b,sum,i+1);
}
int allWays(int a, int b) {
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++) dp[i][j]=-1;
	}
	return f(a,b,0,1);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<allWays(a,b)<<endl;
	}
	return 0;
}
