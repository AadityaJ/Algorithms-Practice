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
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if((arr[i]+arr[j])%3==0) {cnt++;}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int k=j+1;k<n;k++){
					if((arr[i]+arr[j]+arr[k])%3==0)  {cnt++;}
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
