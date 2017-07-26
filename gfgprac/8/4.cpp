#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int f(int *arr,int i,int n,int *mem){
	if(i>=n) return 0;
	if(mem[i]!=-1) return mem[i];
	return mem[i]=max(f(arr,i+1,n,mem),arr[i]+f(arr,i+2,n,mem));
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int *mem=new int[n+1];
		for(int i=0;i<n;i++) mem[i]=-1;
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<f(arr,0,n,mem)<<endl;
	}
	return 0;
}
