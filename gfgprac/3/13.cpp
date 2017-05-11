#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n+1];
		for(int i=0;i<n;i++) cin>>arr[i];
		int count=0;
		for(int i=0;i<n;i++){
			count+=(arr[i]/k);
			if(arr[i]%k) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
