#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int sum=0;
void f(int x,int y,int z,int num){
	if(!x&&!y&&!z) return;
	if(x){
		num=(num*10)+4;
		sum+=num;
		f(x-1,y,z,num);
	}
	if(y){
		num=(num*10)+5;
		sum+=num;
		f(x,y-1,z,num);
	}
	if(z){
		num=(num*10)+6;
		sum+=num;
		f(x,y,z-1,num);
	}
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int num_4,num_5,num_6;
		cin>>num_4>>num_5>>num_6;
		sum=0;
		f(num_4-1,num_5,num_6,4);
		f(num_4,num_5-1,num_6,5);
		f(num_4,num_5,num_6-1,6);
	}
	return 0;
}
