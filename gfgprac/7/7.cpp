#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
void trav(int &cnt,bool g[][51],int i,int j,int n,int m,bool visited[][51]){
	if(i>=n || i<0 || j>=m || j<0) return;
	if(!g[i][j]|| visited[i][j]) return ;
	visited[i][j]=1;
	cnt++;
	trav(cnt,g,i-1,j,n,m,visited);
	trav(cnt,g,i-1,j-1,n,m,visited);
	trav(cnt,g,i-1,j+1,n,m,visited);
	//if(i>0) trav(cnt,g,i-1,j,n,m,visited);
	trav(cnt,g,i+1,j,n,m,visited);
	trav(cnt,g,i+1,j+1,n,m,visited);
	trav(cnt,g,i+1,j-1,n,m,visited);
	//if(i<n-1) trav(cnt,g,i+1,j,n,m,visited);
	trav(cnt,g,i,j-1,n,m,visited);
	trav(cnt,g,i,j+1,n,m,visited);
}
int f(bool g[][51],int n,int m,bool visited[][51]){
	int mx=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j]&&!visited[i][j]){
				int cnt=0;
				trav(cnt,g,i,j,n,m,visited);
				mx=max(mx,cnt);
			}
		}
	}
	return mx;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		bool g[n][51];
		bool visited[n][51];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>g[i][j];
				visited[i][j]=0;
			}
		}
		cout<<f(g,n,m,visited)<<endl;
	}
	return 0;
}
