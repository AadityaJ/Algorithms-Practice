#include <iostream>
using namespace std;
int dx[1001][1001];
void init(){
	for(int i=0;i<1001;i++){
		for(int j=0;j<1001;j++) dx[i][j]=-1;
	}
}
int mx(int a,int b,int c){
	return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
int dp(int h,int a,int here,int count){
	if(h<=0 || a<=0) return count;
	if(dx[h][a]!=-1) return dx[h][a];
	if(here==0){
		return dx[h][a]=(max(dp(h+3,a+2,1,count+1),dp(h+3,a+2,2,count+1)));
	}
	else if(here==1){
		return dx[h][a]=(max(dp(h-5,a-10,0,count+1),dp(h-5,a-10,2,count+1)));
	}
	else{
		return dx[h][a]=(max(dp(h-20,a+5,0,count+1),dp(h-20,a+5,1,count+1)));
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		init();
		int h,a;
		cin>>h>>a;
		cout<<(mx(dp(h,a,0,0),dp(h,a,1,0),dp(h,a,2,0)))<<endl;
	}
	return 0;
}
