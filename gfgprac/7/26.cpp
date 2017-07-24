#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int res(int *arr1,int *arr2,int n,int m,int x){
	map<int,int>mp;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			mp[arr1[i]+arr2[j]]++;
		}
	}
	int l=0;
	map<int,int>::iterator it;
	for(it=mp.begin();it!=mp.end();it++){
		if(l==(x-1)){return it->first;}
		l++;
	}
	return -1;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int m,n,x;
		cin>>n>>m;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++) cin>>arr1[i];
		for(int i=0;i<n;i++) cin>>arr2[i];
		cin>>x;
		cout<<res(arr1,arr2,n,m,x)<<endl;
	}
	return 0;
}
