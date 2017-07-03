#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int find(std::vector<char> v,char c){
	int index=-1;
	for(int i=0;i<v.size();i++){
		if(v[i]==c){index=i;break;}
	}
	return index;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<char> v;
		string ans="-1";
		int mp[256]={0};
		char c;
		for(int i=0;i<n;i++){
			cin>>c;
			mp[c]++;
			if(i==0){ans=c;cout<<ans<<" ";mp[c]++;continue;}
			if(mp[c]==1) v.push_back(c);

			if(mp[c]!=1){
				
			}
			cout<<ans<<' ';

		}
		cout<<endl;
	}
	return 0;
}
