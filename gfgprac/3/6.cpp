#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int rev(string x){
	/*string x="";
	int j=a;
	while(j){
		x+=a+'0';
		j/=10;
	}*/
	reverse(x.begin(),x.end());
	int j=0;
	for(int i=0;i<x.length();i++){
		j+=(x[i]-'0');
		j*=10;
	}
	return j/10;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		//cout<<str<<" "<<str.length()<<endl;
		bool is=0;
		string num="";
		int i;
		for(i=str.length()-1;(str[i])<='9' && str[i]>='0';i--){
			num+=str[i];
		}
		int x=rev(num)-1;
		//cout<<str<<" "<<x<<" "<<i<<endl;
		cout<<(i==x)<<endl;
	}
	return 0;
}
