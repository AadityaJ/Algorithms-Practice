#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		queue<char>q;
		int mp[256]={0};
		for(int i=0;i<str.length();i++){
			mp[str[i]]++;
			if(mp[str[i]]==1){
				q.push(str[i]);
				if(q.front()==str[i])
					cout<<str[i]<<" ";
				else cout<<(q.front())<<" ";
			}
			else{
				while(mp[q.front()]!=1 && !q.empty())
					q.pop();
				if(q.empty()) cout<<"-1 ";
				else cout<<(q.front())<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
