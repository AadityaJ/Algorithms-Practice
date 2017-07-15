#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
bool bhasodi(char b){
	if(b=='A') return 1;
	return 0;
}
bool isN(char a,char b){
	if(a=='A'||b=='A') return 0;
	int n=(a-'0')*10;
	n+=(b-'0');
	return (n<=26);
}
int f(string str,int i,int *dp){
	if(i>=str.length()) return 1;
	if(i==str.length()-1) return 1;
	if(dp[i]!=-1) return dp[i];
	bool bskd=0;
	if(i<(str.length()-2)){
		if(bhasodi(str[i+2])) bskd=1;
	}
	if(!bskd&&isN(str[i],str[i+1])){
		return dp[i]=f(str,i+1,dp)+f(str,i+2,dp);
	}
	return dp[i]=f(str,i+1,dp);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		int *dp=new int[str.length()+1];
		for(int i=0;i<=str.length();i++){
			dp[i]=-1;
		}
		if(str.length()==0){cout<<"1"<<endl;continue;}
		if(str[0]=='0'){cout<<"0"<<endl;continue;}
		bool is=0;
		for(int i=1;i<str.length();i++){
			if(str[i]=='0'&&str[i-1]<='2'){
				str[i]='A';
			}else if(str[i]=='0'){is=1;break;}
		}
		if(is){cout<<"0"<<endl;continue;}
		cout<<f(str,0,dp)<<endl;
	}
	return 0;
}
