#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		int mn=INT_MAX;
		for(int i=1;i<n;i++){
			if(mn>(arr[i]-arr[i-1])) mn=arr[i]-arr[i-1];
		}
		cout<<mn<<endl;
	}
	return 0;
}
