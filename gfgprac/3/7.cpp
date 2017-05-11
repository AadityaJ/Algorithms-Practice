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
		if(n==1) {cout<<"1"<<endl;continue;}
		bool is=0;
		for(int i=2;i<n;i++){
			if(n%i) continue;
			for(int j=1;j<n;j++)
			if(n==pow(i,j)){is=1;break;}
		}
		cout<<is<<endl;
	}
	return 0;
}
