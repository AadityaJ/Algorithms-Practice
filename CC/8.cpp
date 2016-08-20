#include <iostream>
#include <limits>
using namespace std;
int dp(int *arr1,int i,int size,int k,int sum,int sumX){
    if(i==size){
        if(sum==sumX) return k;
        else return INT_MAX;
    }

    return min(dp(arr1,i+1,size,k+1,sum+arr1[i],sumX),dp(arr1,i+1,size,k,sum,sumX));
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,sumX;
        cin>>n>>sumX;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int num=dp(arr,0,n,0,0,sumX);
        if(num==INT_MAX) cout<<"impossible"<<endl;
        else cout<<num<<endl;
    }
    return 0;
}
