#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int temp=0;
		for(int i=0;i<n;i++){
			if(arr[i]!=0) arr[temp++]=arr[i];
		}
		int zi=(temp-1);
		while(temp<n) arr[temp++]=0;
		//for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		temp=zi;
		for(int i=temp;i>=0;i--){
			if(arr[i]!=1) arr[temp--]=arr[i];
		}
		while(temp>=0) arr[temp--]=1;
		for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
