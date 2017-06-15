#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>v[1000];
int x=0;
void f(int *arr,int i,int n,int sum,int k,vector<int>a){
    if(i==n){
        if(sum==k){
            for(int in=0;in<a.size();in++){
                v[x].push_back(a[in]);
                //cout<<a[in]<<" ";
            }
            x++;
        }
		return ;
    }
    a.push_back(arr[i]);
    f(arr,i+1,n,sum+arr[i],k,a);
    a.pop_back();
    f(arr,i+1,n,sum,k,a);
}
int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
    for(int i=0;i<1000;i++) v[i].clear();
    x=0;
    vector<int>a;
    f(input,0,n,0,k,a);
    for(int i=0;i<x;i++){
        for(int j=0;j<v[i].size();j++) output[i][j]=v[i][j];
    }
    return x;
}
int main(int argc, char const *argv[]){
	int t=1;
			//cin>>t;
	int arr[]={9,5,12,3,17,1,18,15,3,17,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int output[100][50];
	subsetSumToK(arr,9,output,6);
	for(int i=0;i<x;i++){
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
