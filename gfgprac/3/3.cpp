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
		int arr[n+1];
		for(int i=0;i<n;i++) cin>>arr[i];
		int x;
		cin>>x;
		bool isPresent=0;
		int f=0,l=n-1;
		for(int i=0;i<n;i++){
			if(arr[i]==x){f=i;isPresent=1;break;}
		}
		for(int i=n-1;i>=0;i--){
			if(arr[i]==x){l=i;isPresent=1;break;}
		}
		if(isPresent) cout<<f<<" "<<l<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
