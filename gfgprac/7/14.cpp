#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
void trav(int a[][4],int n,int m){
	int k=0,l=0;
	while(k<n && l<m){
		for(int i=l;i<m;i++){
			cout<<a[k][i]<<" ";
		}
		k++;
		for(int i=k;i<n;i++){
			cout<<a[i][m-1]<<" ";
		}
		m--;
		if(k<n){
			for(int i=m;i>=0;i--){
				cout<<a[n-1][i-1]<<" ";
			}
			n--;
		}
		if(l<m){
			for(int i=n-1;i>=k;i--){
				cout<<a[i][l]<<" ";
			}
			l++;
		}
	}
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int arr[4][4];
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++) cin>>arr[i][j];
		}
		trav(arr,4,4);
	}
	return 0;
}
