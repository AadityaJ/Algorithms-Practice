#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		map<string,int> mp;
		for(int i=0;i<n;i++){
			cin>>str;
			mp[str]++;
		}
		int ans=0;
		map<string,int>:: iterator it;
		for(it=mp.begin();it!=mp.end();it++){
			if(it->second==2) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
