#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int f(int *arr,int n){
	map<int,int> mp;
	int sm=0;
	int res=0;
	for(int i=0;i<n;i++){
		sm+=arr[i];
		res+=mp[sm];
		if(sm==0) res++;
		mp[sm]++;
	}
	return res;
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
