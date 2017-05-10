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
		int arr[n];
		int mx=0,mx2=0;
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=0;i<n;i++){
			if(arr[i]>mx){mx=arr[i];}
		}
		for(int i=0;i<n;i++){
			if(arr[i]>mx2 && arr[i]!=mx){mx2=arr[i];}
		}
		cout<<mx2<<endl;
	}
	return 0;
}
