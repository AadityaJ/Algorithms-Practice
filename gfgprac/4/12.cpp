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
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		//sort(arr,arr+n);
		int ans=INT_MAX;
		//int pos1=0,pos2=0;
		for(int i=0;i<n;i++){
			if(arr[i]>x){ans=1;}
		}
		for(int i=0;i<n;i++){
			int sum=arr[i];
			for(int j=i+1;j<n;j++){
				sum+=arr[j];
				if(sum>x){ans=min(ans,(j-i+1));}
			}
		}
		//cout<<pos1<<" "<<pos2<<endl;
		cout<<ans<<endl;
	}
	return 0;
}
