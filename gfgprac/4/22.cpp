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
		int arr[(2*n+2)];
		for(int i=0;i<(2*n+2);i++){
			cin>>arr[i];
		}
		sort(arr,arr+(2*n+2));
		if(arr[0]!=arr[1]) cout<<arr[0]<<" ";
		for(int i=1;i<((2*n)+1);i++){
			if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){cout<<arr[i]<<" ";}
		}
		if(arr[(2*n+1)]!=arr[(2*n)]) cout<<arr[(2*n+1)]<<" ";
		cout<<endl;
	}
	return 0;
}
//http://www.geeksforgeeks.org/find-two-non-repeating-elements-in-an-array-of-repeating-elements/
//terribly explained but pretty smart
