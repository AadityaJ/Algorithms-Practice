#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int mem[51];
int f(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	if(mem[n]!=-1) return mem[n];
	return mem[n]=f(n-1)+f(n-2)+f(n-3);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<=50;i++) mem[i]=-1;
		cout<<f(n)<<endl;
	}
	return 0;
}
