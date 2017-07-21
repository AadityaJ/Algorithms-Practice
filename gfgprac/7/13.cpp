#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int mn_val=INT_MAX;
void trav(bool g[][21],int n,int m,int x,int y,int i,int j,int dist,bool **visited){
	if(i==x && j==y){
		mn_val=min(mn_val,dist);
	}
	if(i>=n || j>=m||i<0||j<0||visited[i][j]) return ;
	if(!g[i][j]) return ;
	visited[i][j]=1;
	trav(g,n,m,x,y,i+1,j,dist+1,visited);
	trav(g,n,m,x,y,i,j+1,dist+1,visited);
	trav(g,n,m,x,y,i-1,j,dist+1,visited);
	trav(g,n,m,x,y,i,j-1,dist+1,visited);
}
int minPath(bool g[][21],int n,int m,int x,int y){
	bool **visited=new bool*[n+1];
	for(int i=0;i<n;i++){
		visited[i]=new bool[m+1];
		for(int j=0;j<m;j++) visited[i][j]=0;
	}
	mn_val=INT_MAX;
	trav(g,n,m,x,y,0,0,0,visited);
	return mn_val;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		bool g[n][21];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>g[i][j];
		}
		int x,y;
		cin>>x>>y;
		if(!g[x][y]){cout<<"-1\n";continue;}
		int vv=minPath(g,n,m,x,y);
		if(vv==INT_MAX) cout<<"-1\n";
		else cout<<vv<<endl;
	}
	return 0;
}
