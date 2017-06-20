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
		int sum_l=0,sum_r=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum_r+=arr[i];
		}
		int index=-1;
		for(int i=0;i<n;i++){
			sum_r-=arr[i];
			if(sum_r==sum_l){index=i;break;}
			sum_l+=arr[i];
		}
		cout<<index<<endl;
	}
	return 0;
}
