#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		string ans="";
		stack <int> s1;
		stack <string> s2;
		string tmp="";
		for(int i=0;i<str.length();i++){
			if(str[i]>='0' &&str[i]<='9') {s1.push(str[i]-'0');s2.push(tmp);tmp="";cout<<"s1: "<<str[i]<<endl;}
			else if(str[i]==']'){
				s2.push(tmp);
				cout<<"s2: "<<tmp<<endl;
				tmp="";
			}
			else if(str[i]>='a'&&str[i]<='z'){
				tmp+=str[i];
			}
		}
		
	}
	return 0;
}
