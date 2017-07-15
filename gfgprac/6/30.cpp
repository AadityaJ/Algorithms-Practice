#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int sum=0;
int dp[101][101][101];
void f(int x,int y,int z,int num){
	if(!x&&!y&&!z) {return;}
	if(dp[x][y][z]!=-1) {sum+=dp[x][y][z];return ;}
	int nx=num;
	int ny=num;
	int nz=num;
	dp[x][y][z]=0;
	if(x){
		nx=(nx*10)+4;
		dp[x][y][z]+=nx;
		sum+=nx;
		dp[x][y][z]+=nx;
		f(x-1,y,z,nx);
	}
	if(y){
		ny=(ny*10)+5;
		sum+=ny;
		dp[x][y][z]+=ny;
		f(x,y-1,z,ny);
	}
	if(z){
		nz=(nz*10)+6;
		sum+=nz;
		dp[x][y][z]+=nz;
		f(x,y,z-1,nz);
	}

}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int num_4,num_5,num_6;
		cin>>num_4>>num_5>>num_6;
		sum=0;
		for(int i=0;i<=100;i++){
			for(int j=0;j<=100;j++){
				for(int k=0;k<=100;k++) dp[i][j][k]=-1;
			}
		}
		f(num_4,num_5,num_6,0);
		cout<<sum<<endl;
	}
	return 0;
}
