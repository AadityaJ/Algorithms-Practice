#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int getV(string str){
	int ans=0;
	for(int i=0;i<str.length();i++){
		for(int j=i+1;j<=str.length();j++){
			int len=j-i;
			if(len%2) continue;
			int sum_l=0,sum_r=0;
			for(int x=i;x<i+(len/2);x++){
				sum_l+=(str[x]-'0');
			}
			for(int x=i+(len/2);x<j;x++){
				sum_r+=(str[x]-'0');
			}
			//cout<<i<<" "<<j<<" "<<sum_l<<" "<<sum_r<<endl;
			if(sum_l==sum_r){ans=max(ans,len);}
		}
	}
	return ans;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<getV(str)<<endl;
	}
	return 0;
}
