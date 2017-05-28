#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 1000
using namespace std;
int F[MAX][MAX];
void init(){
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++) F[i][j]=-1;
	}
}
int calc(int *arr,int i,int j){
	if(i==j) return arr[i];
	if(i+1==j) return max(arr[i],arr[j]);
	if(F[i][j]!=-1) return F[i][j];
	return F[i][j]=max(arr[i]+min(calc(arr,i+2,j),calc(arr,i+1,j-1)),arr[j]+min(calc(arr,i,j-2),calc(arr,i+1,j-1)));
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<calc(arr,0,n-1)<<endl;
	}
	return 0;
}
