#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str,ans="";
		cin>>str;
		int N=0,S=0,E=0,W=0;
		for(int i=0;i<str.length();i++){
			if(str[i]=='N') N++;
			if(str[i]=='S') S++;
			if(str[i]=='E') E++;
			if(str[i]=='W') W++;
		}
		int y=abs(N-S);
		int x=abs(E-W);
		if(N>S){
			for(int i=0;i<y;i++) ans+='N';
		}
		else{
			for(int i=0;i<y;i++) ans+='S';
		}
		if(E>W){
			for(int i=0;i<x;i++) ans+='E';
		}
		else{
			for(int i=0;i<x;i++) ans+='W';
		}
		sort(ans.begin(),ans.end());
		cout<<ans<<endl;
	}
	return 0;
}
