#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		int n;
		cin.ignore();
		getline(cin,str,'\n');
		cin>>n;
		string tmp="";
		int i;
		for(i=0;i<str.length();i++){
			tmp+=str[i];
		}
		string x="";
		for(int i=0;i<tmp.length();i++){
			if(tmp[i]==' '){
				x+="%20";
			}else x.push_back(tmp[i]);
		}
		cout<<x<<endl;
	}
	return 0;
}
