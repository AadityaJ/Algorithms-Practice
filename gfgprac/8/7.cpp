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
		int n;
		cin>>n;
		if(!(n&(n+1))) cout<<"YES"<<endl;
		else cout<<"NO\n";
		//cout<<(!n==0)<<endl;
	}
	return 0;
}
