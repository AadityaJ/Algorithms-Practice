#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int mp[1002];
void init(){
	for(int i=1;i<1001;i++) mp[i]=0;
}
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=0;i<n;i++){
			mp[arr[i]]++;
		}
		int num;
		for(int i=1;i<=1000;i++){
			if(mp[i]%2) {num=i;break;}
		}
		cout<<num<<endl;
	}
	return 0;
}
