#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 10001
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		int arr[n];
		int mp[MX],nt[MX];
		for(int i=0;i<MX;i++) {mp[i]=0;nt[i]=0;}
		for(int i=0;i<n;i++) {
			cin>>arr[i];
		}
		cin>>x;
		int count=0;
		for(int i=0;i<n;i++){
			if(mp[arr[i]] && !nt[arr[i]]) {count+=mp[arr[i]];nt[arr[i]]=1;}
			mp[x+arr[i]]++;
			if(arr[i]-x>0 && x!=0)mp[arr[i]-x]++;
		}
		cout<<count<<endl;
	}
	return 0;
}
