#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#define MX 1000000
using namespace std;
int f(int *arr,int i,int j,int **dp){
	if(j<i) return 0;
	if(j==i) return dp[i][j]=arr[i];

	if(dp[i][j]!=-1) return dp[i][j];
	return dp[i][j]=max(arr[i]+min(f(arr,i+2,j,dp),f(arr,i+1,j-1,dp)),arr[j]+min(f(arr,i+1,j-1,dp),f(arr,i,j-2,dp)));
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int **dp=new int*[n+1];
		for(int i=0;i<=n;i++){
			dp[i]=new int[n+1];
			for(int j=0;j<=n;j++) dp[i][j]=-1;
		}
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<f(arr,0,n-1,dp)<<endl;
	}
	return 0;
}
