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
		for(int i=0;i<n;i++) cin>>arr[i];
		int o_i=n,e_i=-1;
		int i=0,j=n-1;
		while(i<j){
			while(arr[i]%2==0) i++;
			while(arr[j]%2==1) j--;
			if(i>=j) break;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
		for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
