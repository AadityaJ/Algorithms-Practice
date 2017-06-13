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
		int mx_so=0,count=0;
		for (int i = 0; i < n; i++) {
			/* code */
			if(arr[mx_so]==arr[i]) count++;
			else count--;
			if(!count){
				count++;
				mx_so=i;
			}
		}
		count =0;
		for(int i=0;i<n;i++) if(arr[mx_so]==arr[i]) count++;
		if(count>(n/2)) cout<<arr[mx_so]<<endl;
		else std::cout << "NO Majority Element" << std::endl;
	}
	return 0;
}
