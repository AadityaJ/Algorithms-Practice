#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int calc(int n,int k,int *arr,int sum){
	if(sum>=k) return sum==k;
	int x=0;
	for(int i=0;i<n;i++){
		x+=calc(n,k,arr,sum+arr[i]);
	}
	return x;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m;
		int arr[m];
		for(int i=0;i<m;i++) cin>>arr[i];
		cin>>n;
		cout<<calc(m,n,arr,0)<<endl;
	}
	return 0;
}
