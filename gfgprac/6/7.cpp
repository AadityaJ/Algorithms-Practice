#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mn=INT_MAX;
		int arr[n];
		bool mp[n];
		for(int i=0;i<n;i++) mp[i]=0;
		for(int i=0;i<n;i++) {cin>>arr[i];mn=min(mn,arr[i]);}
		bool is=1;
		for(int i=0;i<n;i++){
			if(mp[(arr[i]-mn)]==1){is=0;break;}
			mp[arr[i]-mn]=1;
		}
		//if(!is) cout<<is<<continue;
		for(int i=0;i<n;i++){
			if(mp[i]!=1){is=0;break;}
		}
		cout<<is<<endl;
	}
	return 0;
}
