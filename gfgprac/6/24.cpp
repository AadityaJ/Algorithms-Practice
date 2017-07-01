#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=1;i<(n-1);i+=2){
			swap(arr[i],arr[i+1]);
		}
		for (int i = 0; i < n; i++) {
			cout<<arr[i]<<' ';
		}
		std::cout << '\n';
	}
	return 0;
}
