#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		string str="";
		int n;
		cin>>n;
		while(n){
			str+=(n%2)+'0';
			n/=2;
		}
		//cout<<str<<endl;
		//cout<<14-str.length()<<endl;
		for(int i=0;str.length()!=14;i++){
			str+="0";
		}
		reverse(str.begin(),str.end());
		cout<<str<<endl;
	}
	return 0;
}
// reverse(arr,arr+n)
// str.begin() and str.end()