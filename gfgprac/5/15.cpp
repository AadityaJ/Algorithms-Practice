#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 1001
using namespace std;
int mp[MAX];
void init(){
	for(int i=0;i<MAX;i++) mp[i]=0;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int n,m;
		cin>>n>>m;
		int a1[n],a2[m];
		for(int i=0;i<n;i++) cin>>a1[i];
		for(int i=0;i<m;i++) cin>>a2[i];
		for(int i=0;i<n;i++) mp[a1[i]]++;
		for(int i=0;i<m;i++){
			for(int j=0;j<mp[a2[i]];j++) {cout<<a2[i]<<" ";}
			mp[a2[i]]=0;
		}
		for(int i=0;i<MAX;i++){
			for(int j=0;j<mp[i];j++) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
