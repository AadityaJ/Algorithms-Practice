#include <bits/stdc++.h>
using namespace std;
int dp(int *arr,int i,int n,int sum,int sf){
	if(i==n){
		int x=sum-sf;
		return abs(x-sf);
	}

	return min(dp(arr,i+1,n,sum,sf+arr[i]),dp(arr,i+1,n,sum,sf));
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum=0;
		int arr[n];
		for(int i=0;i<n;i++) {cin>>arr[i]; sum+=arr[i];}
		cout<<dp(arr,0,n,sum,0)<<endl;
	}
	return 0;
}
