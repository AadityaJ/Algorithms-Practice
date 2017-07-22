#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
bool f(string str){
 	return ((stoll(str,0,2))%3==0);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<f(str)<<endl;
	}
	return 0;
}
