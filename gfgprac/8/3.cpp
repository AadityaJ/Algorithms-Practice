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
		int num_0=0;
		for(int i=0;i<n;i++){
			if(arr[i]==0) num_0++;
		}
		if(num_0==n)cout<<"-1\n";
		else cout<<num_0<<endl;
	}
	return 0;
}
