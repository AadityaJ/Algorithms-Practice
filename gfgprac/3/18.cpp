#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		((n&(n-1))==0)?(cout<<(int)((log(n)/log(2)))+1):(cout<<"-1");
		cout<<endl;
	}
	return 0;
}
