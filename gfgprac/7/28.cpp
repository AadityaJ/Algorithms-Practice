#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
string add(string s1,string s2){
	int a=min(s1.length(),s2.length());
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	int c=0;
	string ans="";
	int i;
	for(i=0;i<s1.length() && i<s2.length();i++){
		int x=((s1[i]-'0')+(s2[i]-'0')+c);
		c=(x)/2;
		x=(x)%2;
		ans.push_back(x+'0');
	}
	while(i<s1.length()){
		int x=(s1[i]-'0')+c;
			c=(x)/2;
			x=(x)%2;
		ans.push_back(x+'0');
		i++;
	}
	while(i<s2.length()){
		int x=(s2[i]-'0')+c;
			c=(x)/2;
			x=(x)%2;
		ans.push_back(x+'0');
		i++;
	}
	if(c==1){ans.push_back('1');}
	reverse(ans.begin(),ans.end());
	return ans;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		cout<<add(str1,str2)<<endl;
	}
	return 0;
}
