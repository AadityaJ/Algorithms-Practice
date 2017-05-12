#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int ch1[26],ch2[26];
void init(){
	for(int i=0;i<26;i++) {ch1[i]=0;ch2[i]=0;}
}
bool isAna(string str1,string str2){
	for(int i=0;i<str1.length();i++) ch1[str1[i]-'a']++;
	for(int i=0;i<str2.length();i++) ch2[str2[i]-'a']++;
	for(int i=0;i<26;i++){
		if(ch1[i]!=ch2[i]) return 0;
	}
	return 1;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		string str1,str2;
		cin>>str1>>str2;
		if(!isAna(str1,str2)) {cout<<"0\n";continue;}
		if(str1.length()!=str2.length()) {cout<<"0\n";continue;}
		int pts=0;
		for(int i=0;i<str1.length();i++){
			if(str1[i]!=str2[i]) pts++;
		}
		cout<<(pts==2)<<endl;
	}
	return 0;
}
