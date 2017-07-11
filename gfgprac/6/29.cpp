#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool f(int *pre,int i,int jb){
	if(jb>=i) return 1;
	int j=i-1;
	for(;j>=jb;j--){
		if(pre[j]<pre[i]){break;}
	}
	if(j==(jb-1)) return 1;
	int x=j;
	for(;j>=jb;j--){
		if(pre[i]<pre[j]) return 0;
	}
	return f(pre,x,0)&&f(pre,i-1,x+1);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<f(arr,n-1,0)<<endl;
	}
	return 0;
}
