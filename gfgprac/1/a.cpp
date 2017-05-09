#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		bool flg=1;
		for(int i=0;i<str.length()-1;i++){
			if(str[i]>str[i+1]) {flg=0;break;}
		}
		cout<<flg<<endl;
	}
	return 0;
}

// 03:20