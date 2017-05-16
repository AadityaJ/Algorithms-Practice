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
		int cnt=0;
		for(int i=0;i<n;i++) if(arr[i]==1) cnt++;
		int i=0;
		int mx=0;
		while(i<n){
			int x_cnt=0;
			if(arr[i]==0){
				while(arr[i++]!=1 && i<n) x_cnt++;
			}
			if(x_cnt>mx) mx=x_cnt;
			i++;
		}
		cout<<(mx+cnt)<<endl;
	}
	return 0;
}
