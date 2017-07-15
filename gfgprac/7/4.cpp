#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#define MX 301
using namespace std;
int lis(int *arr,int i,int n,int lst,int **dp){
	if(i==n) return 0;
	if(dp[i][lst]!=-1) return dp[i][lst];
	if(arr[i]<lst) return dp[i][lst]=lis(arr,i+1,n,lst,dp);
	return dp[i][lst]=max(lis(arr,i+1,n,lst,dp),1+lis(arr,i+1,n,arr[i],dp));
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int **dp=new int*[n+1];
		for(int i=0;i<=n;i++){
			dp[i]=new int[MX];
			for(int j=0;j<MX;j++) dp[i][j]=-1;
		}
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<lis(arr,0,n,0,dp)<<endl;
	}
	return 0;
}
