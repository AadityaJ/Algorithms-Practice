#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int sumr(int *arr,int n,int x){
	int sum=0;
	for(int i=x;i<n;i++) sum+=arr[i];
	return sum;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int sum_l=0,sum_r=sumr(arr,n,1);
		int ans=-1;
		for(int i=0;i<n;i++){
			if(sum_l==sum_r){ans=++i;break;}
			sum_l+=arr[i];
			sum_r-=arr[i+1];
		}
		cout<<(ans)<<endl;
	}
	return 0;
}
