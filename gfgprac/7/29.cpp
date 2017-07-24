#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int mx(int *arr,int v,int n){
	int m=0;
	for(int i=v;i<n;i++) m=max(m,arr[i]);
	return m;
}
int f(int *arr,int n){
	int sm=0;
	for(int i=0;i<n;){
		int m=mx(arr,i+1,n);
		if(m>arr[i]) m=arr[i];
		//cout<<arr[i]<<" "<<m<<endl;
		int x=i+1;
		while(x<n && m>arr[x]){
			sm+=(m-arr[x]);
			x++;
		}
		i=x;
	}
	return sm;
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
