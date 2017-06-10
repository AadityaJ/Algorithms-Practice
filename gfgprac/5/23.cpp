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
		int mx=0;
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<i;j++){
				if(arr[i]>=arr[j]){mx=max(i-j,mx);}
			}
		}
		cout<<mx<<endl;
	}
	return 0;
}
