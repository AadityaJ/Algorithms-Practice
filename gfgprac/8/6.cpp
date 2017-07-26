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
		map<string,int> mp;
		string str;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>str;
			mp[str]++;
		}
		int mx=0;
		map<string,int>:: iterator it;
		for(it=mp.begin();it!=mp.end();it++){
			if(it->second>mx){mx=it->second;str=it->first;}
		}
		mp[str]=0;
		mx=0;
		for(it=mp.begin();it!=mp.end();it++){
			//cout<<it->first<<" "<<it->second<<endl;
			if(it->second>mx){mx=it->second;str=it->first;}
		}
		cout<<str<<endl;
	}
	return 0;
}
