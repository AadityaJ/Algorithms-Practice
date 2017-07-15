#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int sum=0;
void f(int x,int y,int z,int num){
	if(!x&&!y&&!z) {return;}
	int nx=num;
	int ny=num;
	int nz=num;
	if(x){
		nx=(nx*10)+4;
		sum+=nx;
		f(x-1,y,z,nx);
	}
	if(y){
		ny=(ny*10)+5;
		sum+=ny;
		f(x,y-1,z,ny);
	}
	if(z){
		nz=(nz*10)+6;
		sum+=nz;
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
		f(num_4,num_5,num_6,0);
		cout<<sum<<endl;
	}
	return 0;
}
