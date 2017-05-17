#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int c[1009][1009];
void init(){
	for(int i=0;<1009;i++){
		for(int j=0;j<1009;j++) c[i][j]=-1;
	}
}
int dp(int *a,int *b,int n,int m,int i,int j){
	if(i>n || j>m) return 0;
	if(c[i][j]!=-1) return c[i][j];
	return c[i][j]=max(dp(a,b,n,m,i+1,j)+0,dp(a,b,n,m,i+1,j+1)+(a[i]*b[j]));
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		cout<<dp(a,b,n,m,0,0)<<endl;
	}
	return 0;
}
