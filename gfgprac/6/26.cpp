#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		std::vector<int> odd;
		std::vector<int> even;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x%2) odd.push_back(x);
			else even.push_back(x);
		}
		for(int i=0;i<even.size();i++) cout<<even[i]<<" ";
		for(int i=0;i<odd.size();i++) cout<<odd[i]<<" ";
		cout<<endl;
	}
	return 0;
}
