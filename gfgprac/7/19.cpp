#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int binS(int *arr,int n,int x){
	int hi=n-1;
	int lo=0;
	while(hi>=lo){
		int mid=lo+((hi-lo)/2);
		if(arr[mid]==x){return mid;}
		else if(arr[mid]>x){
			hi=mid-1;
		}else{
			lo=mid+1;
		}
	}
	return -1;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int s_arr[n];
		for(int i=0;i<n;i++) {cin>>arr[i];s_arr[i]=arr[i];}
		sort(s_arr,s_arr+n);
		int cnt=0;
		for(int i=0;i<n;i++){
			int x=binS(s_arr,n,arr[i]);
			if(x>i) cnt+=(x-i);
		}
		cout<<cnt<<endl;
	}
	return 0;
}
