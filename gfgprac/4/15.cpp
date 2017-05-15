#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isEven(char c){
	int a=c-'0';
	return a%2==0;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		//next_permutation(str.begin(),str.end());
		//cout<<str<<endl;
		string ans="-1";
		while(next_permutation(str.begin(),str.end())){
			if(isEven(str[str.length()-1])){
				ans=str;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
// know next_permutation
