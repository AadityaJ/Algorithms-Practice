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
		sort(arr,arr+n);
		if(arr[0]>=0){
			cout<<(arr[n-1]*arr[n-2]*arr[n-3])<<endl;
		}
		else{
			int p1=arr[n-1]*arr[n-2]*arr[n-3];
			int p2=arr[n-1]*arr[0]*arr[1];
			cout<<max(p1,p2)<<endl;
		}
	}
	return 0;
}
