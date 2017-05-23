#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int k;
int dp(std::vector<int> v,int i,int x){
	if(k==0) return i;
	//if(i>=n) return 0;

	arr[i]=k-(1);
	k/=2;
	int a=dp(v,2*i);
	a=max(a,dp(v,(2*i)+1));
	return a;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int i,j;
		cin>>k>>i>>j;
		int n=100000000;
		int arr[n];
		int x=dp(arr,n,1);
		for(int in=0;in<x;in++) cout<<arr[in]<<" ";
	}
	return 0;
}
