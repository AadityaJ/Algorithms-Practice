#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int dp(int *val,int *wt,int n,int W){
	int dp[W+1];
	memset(dp, 0, sizeof dp);
	for (int i=0; i<=W; i++)
	  for (int j=0; j<n; j++)
		 if (wt[j] <= i)
			dp[i] = max(dp[i], dp[i-wt[j]]+val[j]);

	return dp[W];
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,w;
		cin>>n>>w;
		int wt[n],val[n];
		for(int i=0;i<n;i++) cin>>val[i];
		for(int i=0;i<n;i++) cin>>wt[i];
		cout<<dp(val,wt,n,w)<<endl;
	}
	return 0;
}
