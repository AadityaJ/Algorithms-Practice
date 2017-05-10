#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int j=1;
		for (int i = 1; i <=n; ++i){
			if(i==(j*j)){cout<<"1";j++;}
			else cout<<"0";
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
