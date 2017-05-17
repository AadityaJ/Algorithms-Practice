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
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) a[i]=(a[i]-i);
		int mx=0,mn=INT_MAX;
		for(int i=0;i<n;i++){
			mx=max(mx,a[i]);
		}
		for(int i=0;i<n;i++){
			mn=min(mn,a[i]);
		}
		cout<<(mx-mn)<<endl;
	}
	return 0;
}
