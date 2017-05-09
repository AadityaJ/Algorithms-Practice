#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isEq(string str1,string str2){
	if(str1.length()!=str2.length()) return 0;
	if(str1.compare(str2.substr(str1.length()-2,2)+str2.substr(0,str1.length()-2))==0) return 1;
	if(str1.compare(str2.substr(2,str1.length()-2)+str2.substr(0,2))==0) return 1;
	return 0;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		cout<<isEq(str1,str2)<<endl;

	}
	return 0;
}
// 17:00 + see
// silly mistake: read questions properly