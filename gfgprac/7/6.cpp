#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#define MOD 1000000007
using namespace std;
int dp[101][10000];
void init(){
	for(int i=0;i<=100;i++){
		for(int j=0;j<10000;j++) dp[i][j]=-1;
	}
}
int f(int n,int i,int s,int sum){
	if(i==n) {return s==sum;}
	if(dp[i][s]!=-1) return dp[i][s];
	int count=0;
	for(int x=0;x<=9;x++){
		if(i==0 &&x==0) continue;
		count+=f(n,i+1,s+x,sum);
		count=(count%MOD);
	}
	return dp[i][s]=count;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int n,d;
		cin>>n>>d;
		int x=f(n,0,0,d);
		if(x==0) cout<<"-1"<<endl;
		else cout<<(x%MOD)<<endl;
	}
	return 0;
}
