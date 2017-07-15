#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
bool isN(char a,char b){
	int n=(a-'0')*10;
	n+=(b-'0');
	return (n<=26);
}
int f(string str,int i){
	if(i>=str.length()) return 0;
	if(i==str.length()-1) return 1;
	if(isN(str[i],str[i+1])){
		return f(str,i+1)+f(str,i+2);
	}
	return f(str,i+1);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str
		cin>>str;
		cout<<f(str,0)<<endl;
	}
	return 0;
}
