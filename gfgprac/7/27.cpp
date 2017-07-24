#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
bool isv(char c){
	if(c=='a') return 1;
	if(c=='e') return 1;
	if(c=='i') return 1;
	if(c=='o') return 1;
	if(c=='u') return 1;
	return 0;
}
bool ish(string str){
	if(str.length()>=4){
		for(int i=0;i<str.length()-3;i++){
			if(!isv(str[i]) && !isv(str[i+1]) && !isv(str[i+2]) && !isv(str[i+3])){
				return 1;
			}
		}
	}
	int num_v=0;
	int num_c=0;
	for(int i=0;i<str.length();i++){
		if(isv(str[i])) num_v++;
		else num_c++;
	}
	return num_c>num_v;
}
int f(string str1){
	for(int i=0;i<str1.length();i++){
		if(str1[i]>='A' && str1[i]<'a'){
			str1[i]=(str1[i]-'A')+'a';
		}
	}
	vector<string> v;
	string tmp="";
	for(int i=0;i<str1.length();i++){
		if(str1[i]==' '|| i==str1.length()-1){
			if(i==str1.length()-1){tmp+=str1[i];}
			v.push_back(tmp);
			tmp="";
		}else{
			tmp+=str1[i];
		}
	}
	int h_w=0,e_w=0;
	for(int i=0;i<v.size();i++){
		if(ish(v[i])) {h_w++;}
		else e_w++;
	}
	return (5*h_w)+(3*e_w);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str1;
		getline(cin,str1);
		cout<<f(str1)<<endl;
	}
	return 0;
}
