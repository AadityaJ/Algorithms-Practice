#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a=(n/pow(2,m-1));
		cout<<a<<endl;
	}
	return 0;
}
