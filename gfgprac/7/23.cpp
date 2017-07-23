#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		bool x=next_permutation(arr,arr+n);
		if(x){
			for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		}else{
			for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
