#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
pair<bool,string> changetoNg(string str){
	bool is=0;
	string ax="";
	for(int i=0;i<str.length()-1;i++){
		if(str[i]=='n' && str[i+1]=='g'){
			is=1;
			ax+=
		}
	}
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		bool is_ng_1=changetoNg(str1);
		bool is_ng_2=changetoNg(str2);

	}
	return 0;
}
