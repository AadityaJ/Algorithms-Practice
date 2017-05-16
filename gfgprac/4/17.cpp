#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int color[101][101];
void rec(int x,int y,int k,int n,int m,int col){
	if(x<0 || y<0 || x>n || y>m) return ;
	cout<<color[x][y]<<x<<y<<col<<endl;
	if(color[x][y]!=col) return;
	std::cout << "/* message */" << std::endl;
	color[x][y]=k;
	rec(x-1,y,k,n,m,col);
	rec(x-1,y-1,k,n,m,col);
	rec(x,y-1,k,n,m,col);
	rec(x-1,y+1,k,n,m,col);
	rec(x,y+1,k,n,m,col);
	rec(x+1,y,k,n,m,col);
	rec(x+1,y-1,k,n,m,col);
	rec(x+1,y+1,k,n,m,col);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int color[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>color[i][j];
			}
		}
		int k,x,y;
		cin>>x>>y>>k;
		cout<<color[x][y]<<endl;
		rec(x,y,k,n,m,color[x][y]);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<color[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
