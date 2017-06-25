#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int retArea(int *arr,int n){
	if(n==0) return 0;

	int mx=0;
	for(int i=0;i<n;i++){
		int num=1;
		for(int j=i-1;j>=0;j--){
			if(arr[j]<arr[i]) break;
			num++;
		}
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]) break;
			num++;
		}
		mx=max(mx,num*arr[i]);
	}
	return mx;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<retArea(arr,n)<<endl;
	}
	return 0;
}
