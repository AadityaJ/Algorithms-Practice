#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void printArr(int *arr,int n){
	for(int i=n-1;i>=0;i--){
		if(arr[i]==-100) continue;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void Max3(int *arr,int n){
	sort(arr,arr+n);
	bool is=0;
	int sum=0;
	for(int i=0;i<n;i++) sum+=arr[i];
	if(sum%3==0){
		is=1;
		printArr(arr,n);
		return ;
	}
	int i=0;
	for(i=0;i<n;i++){
		int x=sum-arr[i];
		if(x%3==0){
			is=1;
			arr[i]=-100;
			break;
		}
	}
	if(is) printArr(arr,n);
	else cout<<"NOT POSSIBLE\n";
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		Max3(arr,n);
	}
	return 0;
}
