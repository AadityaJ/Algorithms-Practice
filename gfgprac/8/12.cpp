#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int mem[100][1001];
void init(){
	for(int i=0;i<100;i++){
		for(int j=0;j<1001;j++) mem[i][j]=-1;
	}
}
int dp(int *arr,int i,int n,int k,int sx){
	if(i==n) return (sx==k);
	if(mem[i][sx]!=-1) return mem[i][sx];
	return mem[i][sx]=dp(arr,i+1,n,k,sx)+dp(arr,i+1,n,k,sx^arr[i]);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<dp(arr,0,n,k,0)<<endl;
	}
	return 0;
}
