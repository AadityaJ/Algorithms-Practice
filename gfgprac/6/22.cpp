#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int do_f(string str){
	int mx=0;
	stack<int>s;
	s.push(-1);
	for(int i=0;i<str.length();i++){
		if(str[i]=='(') s.push(i);
		else{
			s.pop();
			if(s.empty()) s.push(i);
			else{
				mx=max(mx,i-s.top());
			}
		}
	}
	return mx;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<do_f(str)<<endl;
	}
	return 0;
}
