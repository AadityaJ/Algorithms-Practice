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
		sort(arr,arr+n);
		for(int i=n-1;i>=0;i--) cout<<arr[i];
		cout<<endl;
	}
	return 0;
}
// 02:00