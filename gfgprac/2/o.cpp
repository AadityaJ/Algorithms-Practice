#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// i know there is a better optimisation
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr1[n+1],arr2[n+1];
		for(int i=0;i<n;i++){
			cin>>arr1[i];
		}
		for(int i=0;i<n;i++){
			cin>>arr2[i];
		}
		sort(arr1,arr1+n);
		sort(arr2,arr2+n);
		bool isEq=1;
		for(int i=0;i<n;i++){
			if(arr1[i]!=arr2[i]){isEq=0;break;}
		}
		cout<<isEq<<endl;
	}
	return 0;
}
