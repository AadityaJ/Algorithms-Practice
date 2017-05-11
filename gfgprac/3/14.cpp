#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void rec(string str,int a){
	if(a==str.length()) {cout<<str<<" ";return ;}
	if(str[a]!='?') rec(str,a+1);
	else {
		str[a]='0';
		rec(str,a+1);
		str[a]='1';
		rec(str,a+1);
	}

}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		std::vector<int> v;
		rec(str,0);
		cout<<endl;
	}
	return 0;
}
