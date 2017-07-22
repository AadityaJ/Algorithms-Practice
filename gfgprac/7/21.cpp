#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int len;
void f(int x,int y,int desx,int desy,bool **visited,int l,int N,int M){
	if(x==desx && y==desy){
		len=min(len,l);
		return;
	}
	if(x>=N || y>=M || x<0 || y<0) return ;
	if(visited[x][y]) return ;
	visited[x][y]=1;
	f(x+2,y+1,desx,desy,visited,l+1,N,M);
	f(x+1,y+2,desx,desy,visited,l+1,N,M);
	f(x-2,y+1,desx,desy,visited,l+1,N,M);
	f(x-1,y+2,desx,desy,visited,l+1,N,M);
	f(x-2,y-1,desx,desy,visited,l+1,N,M);
	f(x-1,y-2,desx,desy,visited,l+1,N,M);
	f(x+1,y-2,desx,desy,visited,l+1,N,M);
	f(x+2,y-1,desx,desy,visited,l+1,N,M);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int N,M,x,y,desx,desy;
		len=INT_MAX;
		cin>>N>>M;
		cin>>x>>y>>desx>>desy;
		bool **visited=new bool*[26];
		for(int i=0;i<=25;i++){
			visited[i]=new bool[26];
			for(int j=0;j<=25;j++) visited[i][j]=0;
		}
		f(x,y,desx,desy,visited,0,N,M);
		if(len==INT_MAX) cout<<"-1"<<endl;
		else cout<<len<<endl;
	}
	return 0;
}
