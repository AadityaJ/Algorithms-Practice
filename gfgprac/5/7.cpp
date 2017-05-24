#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define L 1000001
using namespace std;
int arr[L];
bool is(int n){
	int x=(n%10);
	n/=10;
	while(n){
		if((n%10)-x!=1 && x-(n%10)!=1) return 0;
		n/=10;
	}
	return 1;
}
void init(){
	arr[0]=1;
	for(int i=1;i<L;i++){
		if(is(i)) arr[i]=(arr[i-1]+1);
		else arr[i]=(arr[i-1]);
	}
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	init();
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<(arr[b]-arr[a]+is(a))<<endl;
	}
	return 0;
}
