#include <bits/stdc++.h>
using namespace std;
bool isSat(int n){
	while(n){
		if((n%10>5) ||(n%10==0)) return 0;
		n/=10;
	}
	return 1;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s=0;
		for(int i=1;i<=n;i++){
			if(isSat(i)) s++;
		}
		cout<<s<<endl;
	}
	return 0;
}
