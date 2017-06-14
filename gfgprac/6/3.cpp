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
		int arr[n];
		int i;
		for(i=0;i<n;i++) cin>>arr[i];
		std::vector<int> v;
		int l=-1;
		for(i=0;i<n;i++){
			if(arr[i]==l) v[v.size()-1]+=l;
			else{
				v.push_back(arr[i]);
				l=arr[i];
			}
		}
		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	}
	return 0;
}
