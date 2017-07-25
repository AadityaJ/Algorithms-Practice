#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int f(int *arr,int sz){
	int mx=0;
	for(int i=0;i<sz;i++){
		int m=0,n=0;
		for(int j=i-1;j>=0;j--){
			if(arr[i]>arr[j]) break;
			m++;
		}
		for(int j=i+1;j<sz;j++){
			if(arr[i]>arr[j]) break;
			n++;
		}
		mx=max(mx,(arr[i]*(1+m+n)));
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
		cout<<f(arr,n)<<endl;
	}
	return 0;
}
