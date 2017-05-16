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
		n=(2*n)+2;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int a=arr[0];
		for(int i=1;i<n;i++){
			a^=arr[i];
		}
		int x=a& ~(a-1);
		int val1=0,val2=0;
		for(int i=0;i<n;i++){
			if(arr[i]&x) val1^=arr[i];
			else val2^=arr[i];
		}
		int a1=min(val1,val2);
		int a2=max(val1,val2);
		cout<<a1<<" "<<a2<<endl;
	}
	return 0;
}
