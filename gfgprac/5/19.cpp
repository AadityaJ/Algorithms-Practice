#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define MAX 5000
using namespace std;
int dp[100][MAX];
void init(){
	for(int i=0;i<100;i++){
		for(int j=0;j<MAX;j++) dp[i][j]=-1;
	}
}
int calc(int *arr,int i,int n,int s1,int sum){
	if(dp[i][s1]!=-1) return dp[i][s1];
	if(i==n) {
		int s2=(sum-s1);
		return abs(s1-s2);
	}
	return dp[i][s1]=min(calc(arr,i+1,n,s1+arr[i],sum),calc(arr,i+1,n,s1,sum));
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int n;
		cin>>n;
		int arr[n];
		int sum=0;
		for(int i=0;i<n;i++) {cin>>arr[i];sum+=arr[i];}
		cout<<calc(arr,0,n,0,sum)<<endl;
	}
	return 0;
}
