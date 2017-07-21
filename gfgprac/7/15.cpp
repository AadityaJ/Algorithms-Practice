#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
bool search(int arr[][31],int n,int m,int x){
	int i=n-1,j=0;
	while(i>=0 && j<m){
		if(arr[i][j]==x){
			return 1;
		}
		else if(arr[i][j]>x){
			i--;
		}else{
			j++;
		}
	}
	return 0;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr[n][31];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>arr[i][j];
		}
		int x;
		cin>>x;
		cout<<search(arr,n,m,x)<<endl;
	}
	return 0;
}
