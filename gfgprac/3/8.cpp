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
		int arr[n+1];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		int mn=INT_MAX;
		int k;
		cin>>k;
		for(int i=k-1;i<n;i++){
			if((arr[i]-arr[i-k+1])<mn) mn=(arr[i]-arr[i-k+1]);
		}
		cout<<mn<<endl;
	}
	return 0;
}
