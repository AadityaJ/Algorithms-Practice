#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		//std::cout << str[0] << std::endl;
		int i=0,cnt=0;
		while(i<str.length()){
			if(str[i++]=='1'){
				if(str[i]=='0'){
					while(str[i++]=='0');
					if(str[i-1]=='1'){cnt++;i--;}
				}
			}
			//i++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
