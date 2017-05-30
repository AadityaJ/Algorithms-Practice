#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isDone[51];
int calc(int *arr,int n,int i,int *s,int k){
	if(i==n){
		int mx=0;
		for(int ix=0;ix<k;ix++) mx=max(mx,s[ix]);
		cout<<mx<<endl;
		return mx;
	}
	int mx=0;
	for(int j=0;j<k;j++){
		s[j]+=arr[i];
		mx=min(mx,calc(arr,n,i+1,s,k));
		s[j]-=arr[i];
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
		int k;
		cin>>k;
		int s[k];
		for(int i=0;i<k;i++) s[i]=0;
		cout<<calc(arr,n,0,s,k)<<endl;
	}
	return 0;
}
