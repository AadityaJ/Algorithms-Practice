#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
bool isPath(int currX,int currY,int n,bool **visited,int arr[][21]){
	if(currX>=n || currY>=n || currX<0 || currY<0) return 0;
	if(arr[currX][currY]==2) return 1;
	if(visited[currX][currY]) return 0;
	if(arr[currX][currY]==0) return 0;
	visited[currX][currY]=1;
	return isPath(currX+1,currY,n,visited,arr)||isPath(currX,currY+1,n,visited,arr)||isPath(currX-1,currY,n,visited,arr)||isPath(currX,currY-1,n,visited,arr);
}
bool isPa(int src_x,int src_y,int n,int arr[][21]){
	bool **visited=new bool *[n+1];
	for(int i=0;i<n;i++){
		visited[i]=new bool[n];
		for(int j=0;j<n;j++) visited[i][j]=0;
	}
	return isPath(src_x,src_y,n,visited,arr);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n][21];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>arr[i][j];
		}
		int src_x,src_y;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j]==1){src_x=i;src_y=j;break;}
			}
		}
		cout<<isPa(src_x,src_y,n,arr)<<endl;
	}
	return 0;
}
