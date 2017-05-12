#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int getLast(int a){
	int x=a;
	int val=0;
	while(x){
		val=(x%10);
		x/=10;
	}
	return val;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int x=0;
		for(int i=a;i<=b;i++){
			if(getLast(i)==(i%10)) x++;
		}
		cout<<x<<endl;
	}
	return 0;
}
