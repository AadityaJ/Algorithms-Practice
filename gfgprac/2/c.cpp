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
		for(int i=n;i>0;i--){
			for(int j=0;j<(n-i);j++) cout<<" ";
			for(int j=0;j<(2*i-1);j++) cout<<"*";
			//cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
