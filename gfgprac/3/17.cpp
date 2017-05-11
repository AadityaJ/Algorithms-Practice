#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
long long int fib[81];
void init(){
	fib[0]=1;
	fib[1]=1;
	for(int i=2;i<81;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	init();
	while(t--){
		int n;
		cin>>n;
		cout<<fib[n]<<endl;
	}
	return 0;
}
//https://www.dartmouth.edu/~academicoutreach/docs/fibonacci-numbers-and-tiling.pdf
