#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string str;
		int a=n;
		while(a){
			str+=(a%2)+'0';
			a/=2;
		}
		reverse(str.begin(),str.end());
		//cout<<str<<endl;
		str[k-1]='0';
		a=0;
		//cout<<str<<endl;
		for(int i=0;i<str.length();i++){
			a+=(str[i]-'0');
			//cout<<a<<" ";
			a*=2;
		}
		a/=2;
		cout<<a<<endl;
	}
	return 0;
}
