#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int numL(int x){
	int count=0;
	while(x){
		x/=2;
		count++;
	}
	return count;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],mx=0;
		for(int i=0;i<n;i++) {cin>>arr[i];mx=max(mx,arr[i]);}
		int count=numL(mx);
		int ans=0;
		for(int i=0;i<count;i++){
			int num_0=0;
			int num_1=0;
			for(int j=0;j<n;j++){
				if(arr[j]%2) num_1++;
				else num_0++;
				arr[j]/=2;
			}
//			cout<<num_1<<' '<<num_0<<endl;
			ans+=(num_1*num_0);
		}
		cout<<(ans*2)<<endl;
	}
	return 0;
}
