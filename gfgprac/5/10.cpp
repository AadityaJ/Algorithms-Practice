#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int mx_h=0,mx=0;
		for(int i=0;i<n;i++){
			mx_h=mx_h+arr[i];
			if(mx_h<0) mx_h=0;
			mx=max(mx,mx_h);
		}
		if(mx==0){
			int mn=INT_MIN;
			for(int i=0;i<n;i++) mn=max(mn,arr[i]);
			cout<<mn<<endl;
		}
		else cout<<mx<<endl;
	}
	return 0;
}
