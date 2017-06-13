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
		std::vector<int> o;
		std::vector<int> e;
		for(int i=0;i<n;i++){
			if(arr[i]%2==0) cout<<arr[i]<<" ";
		}
		for(int i=0;i<n;i++){
			if(arr[i]%2==1) cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
