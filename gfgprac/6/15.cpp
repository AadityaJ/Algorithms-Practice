#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void f(string str,int o,int c,int i,int n){
	if(i==n){
		if(o==c) cout<<str<<endl;
		return ;
	}
	if(o<c) return;
	f(str+"(",o+1,c,i+1,n);
	f(str+")",o,c+1,i+1,n);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		f("",0,0,0,(2*n));
	}
	return 0;
}
