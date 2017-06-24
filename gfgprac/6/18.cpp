#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int f(string str){
	stack<int>s;
	s.push(-1);
	int mx=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='(') s.push(i);
		else{
			s.pop();
			if(s.empty()){
				s.push(i);
			}
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
		cout<<f(str)<<endl;
	}
	return 0;
}
