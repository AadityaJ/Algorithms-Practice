#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isPair(int *arr,int x,int n){
	int p_1=0,p_2=n-1;
	while(p_1<p_2){
		if(arr[p_1]*arr[p_2]==x){return 1;}
		else if(arr[p_1]*arr[p_2]<x){p_1++;}
		else p_2--;
	}
	return 0;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		int ans=-1;
		for(int i=n-1;i>=0;i--){
			if(isPair(arr,arr[i],n)){
				ans=arr[i];break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
