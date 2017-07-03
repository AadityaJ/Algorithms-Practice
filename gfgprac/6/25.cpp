#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void rinse(std::vector<char>&v,int mp[]){
	for(int i=0;i<v.size();i++){
		if(mp[v[i]]>1) v.erase(v.begin()+i);
	}
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<char> v;
		char ans='0';
		int mp[256]={0};
		char c;
		for(int i=0;i<n;i++){
			cin>>c;
			mp[c]++;
			if(mp[c]==1) v.push_back(c);
			rinse(v,mp);
			if(ans=='0' && v.size()==0){cout<<"-1 ";continue;}
			if(ans=='0') ans = v.front();
			else if(mp[ans]>1){
				v.erase(v.begin());
				if(v.size()==0) ans='0';
				else ans=v.front();
			}
			if(ans=='0') cout<<"-1"<<" ";
			else cout<<ans<<" ";
		}
		cout<<endl;
	}
	return 0;
}
