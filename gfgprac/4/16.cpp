#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int arr[100][100];
int m_x(int a,int b,int c){
	return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
int dp(int i,int j,int n,int m,int sum){
	if(i>=n || j>=m || i<0 || j<0) return sum;
	int mx=0;
	mx=m_x(dp(i,j+1,n,m,sum+arr[i][j]),dp(i-1,j+1,n,m,sum+arr[i][j]),dp(i+1,j+1,n,m,sum+arr[i][j]));

	return mx;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>arr[i][j];
		}
		int mx=0;
		for(int i=0;i<m;i++){
			mx=max(mx,dp(0,i,n,m,arr[0][i]));
		}
		cout<<mx<<endl;
	}
	return 0;
}
//Nope
