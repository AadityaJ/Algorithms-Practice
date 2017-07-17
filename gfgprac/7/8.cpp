#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		//unsigned int a=INT_MAX;
		long long int x=pow(2,31);

		cout<<(x^n)<<endl;
	}
	return 0;
}
