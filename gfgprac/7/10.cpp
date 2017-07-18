#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str,xyz;
		cin>>str>>xyz;
		int n=str.find(xyz);
		if(n!=str.npos) cout<<n<<endl;
		else cout<<"Not found"<<endl;
	}
	return 0;
}
