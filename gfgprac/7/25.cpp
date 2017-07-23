#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
bool check(int g[][101],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j]==1) return 0;
		}
	}
	return 1;
}
bool isvalid(int x,int y,int n,int m){
	if(x>=n || x<0 || y>=m)
}
int f(int g[][101],int n,int m){
	bool **visited=new bool*[n];
	for(int i=0;i<n;i++){
		visited[i]=new bool[m];
		for(int j=0;j<m;j++) visited[i][j]=0;
	}
	queue<pair<int,int> >q;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j]==1){
				visited[i][j]=1;
				q.push_back(make_pair(i,j));
			}
		}
	}
	int x=0;
	while(!q.empty()){
		int sz=q.size();
		for(int i=0;i<sz;i++){
			pair<int,int> coord=q.front();
			q.pop();
			int xc=coord.first;
			int yc=coord.second;
			if(xc)
		}
	}
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int g[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>g[i][j];
		}
		cout<<f(g,n,m)<<endl;
	}
	return 0;
}
