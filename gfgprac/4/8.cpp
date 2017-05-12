#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int x=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
//			if(arr[i]%2){x^=arr[i];}
		}
		std::map<int, int> mp;
		for(int i=0;i<n;i++){
			mp[arr[i]]++;
		}
		for(int i=0;i<n;i++){
		if(mp[arr[i]]%2){cout<<arr[i]<<" ";x^=arr[i];}
		}
		cout<<x<<endl;
	}
	return 0;
}
//http://practice.geeksforgeeks.org/problems/game-of-xor/0
