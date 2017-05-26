#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 301
using namespace std;
int dp[MAX][MAX];
void init(){
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++) dp[i][j]=-1;
	}
}
int calc(int *arr,int n,int i,int sum,int k){
	if(dp[i][sum]!=-1) return dp[i][sum];
	if(sum>=k) return sum==k;
	if(i>=n) return 0;
	int ans=0;
	for(int x=i;x<n;x++){
		ans+=calc(arr,n,x,sum+arr[x],k);
	}
	return dp[i][sum]=ans;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int k;
		cin>>k;
		cout<<calc(arr,n,0,0,k)<<endl;
	}
	return 0;
}
