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
		if(n&1){
			cout<<"Player A"<<endl;
		}else cout<<"Player B"<<endl;
	}
	return 0;
}
