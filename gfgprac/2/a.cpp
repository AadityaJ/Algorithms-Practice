#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++) cin>>arr[i];
		int x;
		cin>>x;
		for(int i=x;i<n;i++) cout<<arr[i]<<" ";
		for(int i=0;i<x;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}	
	return 0;
}
// 04:00