#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int dp(int *arr,int i,int sum,int n,int x){
	if(i==n) return (sum==x);
	return dp(arr,i+1,sum+arr[i],n,x)+dp(arr,i+1,sum,n,x);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int x;
		cin>>x;
		cout<<dp(arr,0,0,n,x)<<endl;
	}
	return 0;
}
