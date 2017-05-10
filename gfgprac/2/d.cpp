#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		bool is=1;
		for(int i=0;i<n.length();i++){
			if(n[i]!=n[n.length()-i-1]){
				is=0;break;
			}
		}
		(is)?cout<<"Yes\n":
			cout<<"No\n";
	}
	return 0;
}
 