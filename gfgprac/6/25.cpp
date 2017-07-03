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
		int n;
		cin>>n;
		queue<char>q;
		char ans='0';
		int mp[256]={0};
		char c;
		for(int i=0;i<n;i++){
			cin>>c;
			mp[c]++;
			q.push(c);
			bool is=1;
			while(!q.empty()){
				if(mp[q.front()]==1){
					cout<<q.front()<<' ';
					is=0;
					break;
				}
				q.pop();
			}
			if(is) cout<<"-1 ";
		}
		cout<<endl;
	}
	return 0;
}
