#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
bool isVowel(char c){
	if(c=='a') return 1;
	if(c=='e') return 1;
	if(c=='i') return 1;
	if(c=='o') return 1;
	if(c=='u') return 1;
	return 0;
}
bool myComp(pair<string,int>p1,pair<string,int>p2){
	return p1.second>p2.second;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str="what mungus hugh";
		//getline(cin,str);
		//cout<<str<<endl;
		vector<pair<string,int> > s;
		string temp="";
		int num_vov=0;
		for(int i=0;i<str.length();i++){
			if(str[i]==' '||i==str.length()-1){
				s.push_back(make_pair(temp,num_vov));
				num_vov=0;
				temp="";
			}else{
				temp+=str[i];
				num_vov+=isVowel(str[i]);
			}
		}
		sort(s.begin(),s.end(),myComp);
		for(int i=0;i<s.size();i++){
			cout<<s[i].first<<endl;
		}
	}
	return 0;
}
