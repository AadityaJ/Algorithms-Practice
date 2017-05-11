#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int mp[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};

int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		std::string str;
		cin>>str;
		for(int i=0;i<str.length();i++) cout<<(mp[str[i]-'a']);
		cout<<endl;
	}
	return 0;
}
