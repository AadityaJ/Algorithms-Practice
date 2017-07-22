#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> precomp(){
	bool arr[5000]={0};
	for(int i=0;i<=5000;i++){
		if((i*2)<=5000)arr[i*2]=1;
		if((i*3)<=5000)arr[i*3]=1;
		if((i*5)<=5000)arr[i*5]=1;
	}
	vector<int> v;
	for(int i=0;i<=5000;i++){
		if(arr[i])v.push_back(i);
	}
	return v;
}
int main(int argc, char const *argv[]){
	vector<int> a=precomp();
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<a[x-1]<<endl;
	}
	return 0;
}
