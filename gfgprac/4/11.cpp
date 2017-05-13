#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int ope=0,clo=0;
		for(int i=0;i<str.length();i++){
			if(str[i]==')') clo++;
		}
		int ans=-1;
		int i;
		for(i=0;i<str.length();i++){
			if(ope==clo){ans=i;break;}
			if(str[i]=='(') ope++;
			else clo--;
		}
		if(ope==clo && i==str.length()) ans=str.length();
		cout<<ans<<endl;
	}
	return 0;
}
