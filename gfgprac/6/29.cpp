#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int f(string str,int i,int j,int **dp){
	if(i>j) return 0;
	if(i==j) return 1;
	if(dp[i][j]!=-1) return dp[i][j];
	if(str[i]==str[j]) return dp[i][j]=2+f(str,i+1,j-1,dp);

	return dp[i][j]=max(f(str,i+1,j,dp),f(str,i,j-1,dp));
}
int getPalin(string str){
	int **dp=new int*[str.length()+1];
	for(int i=0;i<=str.length();i++){
		dp[i]=new int[str.length()+1];
		for(int j=0;j<=str.length();j++) dp[i][j]=-1;
	}
	return f(str,0,str.length()-1,dp);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<getPalin(str)<<endl;
	}
	return 0;
}
