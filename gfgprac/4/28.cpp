#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int ans=n-1;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		//for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		for(int i=0;i<n;i++){
			if(arr[i]>x){ans=i-1;break;}
		}
		cout<<ans<<endl;
	}
	return 0;
}
