#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		std::map<int, bool> mp;

		for(int i=0;i<n;i++){
			mp[k-arr[i]]=1;
		}
		bool is=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int x=k-(arr[i]+arr[j]);
				if(mp[arr[i]+arr[j]] && x!=arr[i] && x!=arr[j]){is=1;break;}
			}
		}
		cout<<is<<endl;
	}
	return 0;
}
