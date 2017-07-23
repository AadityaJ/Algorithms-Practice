#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int cva(string str1,string str2){
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());

	int i=0;
	int c=0;
	int x=0;
	for(i=0;i<min(str1.length(),str2.length());i++){
		int s=(str1[i]-'0')+(str2[i]-'0')+c;
		x+=s/10;
		c=s/10;
	}
	while(i<str1.length()){
		int s=(str1[i]-'0')+c;
		x+=s/10;
		c=s/10;
		i++;
	}
	while(i<str2.length()){
		int s=(str2[i]-'0')+c;
		x+=s/10;
		c=s/10;
		i++;
	}
	return x;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		cout<<cva(str1,str2)<<endl;
	}
	return 0;
}
