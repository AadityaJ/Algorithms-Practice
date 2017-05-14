#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isEven(char a){
	if(a=='0') return 1;
	if(a=='2') return 1;
	if(a=='4') return 1;
	if(a=='6') return 1;
	if(a=='8') return 1;
	return 0;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		string ans="-1";
		for(int i=str.length()-1;i>=0;i--){
			cout<<isEven(str[i])<<endl;
			if(isEven(str[i]) &&(str[i]<str[str.length()-1])){
				char tmp=str[i];
				str[i]=str[str.length()-1];
				str[str.length()-1]=tmp;
				ans=str;break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
