#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int arr[1000][1000];
int d[1000][1000];
void init(){
	for(int i=0;i<1000;i++){
		for(int j=0;j<1000;j++){
			d[i][j]=-1;
		}
	}
}
int dp(int n,int i,int last){
	//cout<<"here\n";
	if(i==n) return 0;
	int mx=0,pos=0;
	//cout<<"here\n";
	if(last!=-1){
		if(d[i][last]!=-1) return d[i][last];
	}
	for(int in=0;in<n;in++){
		if(in==last) continue;
		int a=dp(n,i+1,in)+arr[i][in];
		if(a>mx){mx=a;pos=in;}
	}
	return (d[i][last]=mx);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int m;
		cin>>m;
		//int arr[m+1][m+1];
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++) cin>>arr[i][j];
		}
		cout<<(dp(m,0,-1))<<"\n";
	}
	return 0;
}
