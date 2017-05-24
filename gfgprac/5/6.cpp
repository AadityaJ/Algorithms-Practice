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
		int k,n;
		cin>>k>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		if(k>=(arr[n-1]-arr[0])){cout<<(arr[n-1]-arr[0])<<endl;continue;}
		arr[0]+=k;
		arr[n-1]-=k;
		int mx=max(arr[n-1],arr[0]),mn=min(arr[0],arr[n-1]);
		for(int i=1;i<n-1;i++){
			if(arr[i]<mn) arr[i]+=k;
			else if(arr[i]>mx) arr[i]-=k;
			else if ((arr[i] - mn) > (mx - arr[i])) arr[i] -= k;
			else arr[i] += k;
			mx=max(arr[i],mx);
			mn=min(arr[i],mn);
		}
		cout<<(mx-mn)<<endl;
	}
	return 0;
}
