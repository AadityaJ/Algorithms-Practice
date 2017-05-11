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
		int temp[n];	
		for(int i=0;i<n;i++) {cin>>arr[i];temp[i]=0;}
		for(int i=0;i<n;i++){
			int count=0;
			for(int j=i+1;j<n;j++){
				if(arr[i]<arr[j]) count++;
			}
			cout<<count<<" ";
		}
		cout<<endl;
	}
	return 0;
}


// TODO: http://www.geeksforgeeks.org/counting-inversions/