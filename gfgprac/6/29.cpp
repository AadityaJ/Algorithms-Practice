#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isPalin(string str,int i,int j){
	if(i>=j) return 1;
	if(str[i]!=str[j])return 0;
	return isPalin(str,i+1,j-1);
}
int getPalin(string str){
	int mx=0;
	for(int i=0;i<str.length();i++){
		for(int j=i+1;j<str.length();j++){
			if(isPalin(str,i,j)) mx=max(mx,j-i);
		}
	}
	return mx;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<getPalin(str)<<endl;
	}
	return 0;
}
