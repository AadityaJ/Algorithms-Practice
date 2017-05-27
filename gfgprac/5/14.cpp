#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#define MAX 100
using namespace std;
int dp[MAX][2];
void init(){
	for(int i=0;i<MAX;i++){
		dp[i][0]=-1;
		dp[i][1]=-1;
	}
}
int calc(string str,int n,int i){
	if(str.length()==n) {return 1;}
	if(dp[i][str[i-1]=='1']!=-1) return dp[i][str[i-1]=='1'];
	if(str[i-1]=='1') return dp[i][str[i-1]=='1']=calc(str+"0",n,i+1);
	else return dp[i][str[i-1]=='1']=calc(str+"0",n,i+1)+calc(str+"1",n,i+1);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int n;
		cin>>n;
		cout<<calc("0",n,1)+calc("1",n,1)<<endl;
	}
	return 0;
}
