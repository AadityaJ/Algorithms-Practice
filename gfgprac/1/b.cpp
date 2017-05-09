#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int pos(int a){
	int px=0;
	for(int i=1;i<=a&&(a%i==0);i*=2) px++;
	return px;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<pos(n)<<endl;
	}
	return 0;
}
// 07::25