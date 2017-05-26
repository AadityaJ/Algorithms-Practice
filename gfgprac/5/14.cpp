#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		//map<string,int> mp;
		for(int i=0;i<str.length();i++){
			string s="";
			s+=str[i];
			for(int j=i;j>=0;j--){
				cout<<i<<" "<<j<<" "<<s<<endl;
				s+=str[j];
			}
		}
	}
	return 0;
}
