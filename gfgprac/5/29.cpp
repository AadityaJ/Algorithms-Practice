#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 1001
using namespace std;
bool isF[MX];
void createFib(){
	isF[0]=1;
	isF[1]=1;
	int a=0,b=1,c;
	for(int i=0;i<MX;i++){
		c=a+b;
		if(c>MX) break;
		isF[c]=1;
		a=b;
		b=c;
	}
}
int main(int argc, char const *argv[]){
	createFib();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x;
		std::vector<int> v;
		for(int i=0;i<n;i++){
			cin>>x;
			if(isF[x]) v.push_back(x);
		}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
