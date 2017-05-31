#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1) cout<<"9"<<endl;
		else if(n==2) cout<<"9009"<<endl;
		else if(n==3) cout<<"906609"<<endl;
		else if(n==4) cout<<"99000099"<<endl;
		else if(n==5) cout<<"9966006699"<<endl;
		else cout<<"999000000999"<<endl;
	}
	return 0;
}
