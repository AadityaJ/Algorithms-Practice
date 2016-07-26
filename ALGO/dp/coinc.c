#include <stdio.h>
int dp[1001][1001];
void init(int n,int size){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=size;j++)
            dp[i][j]=-1;
    }
}
int coinchange(int *arr,int size,int n){
    if(n==0) return 1;
    if(n<0) return 0;
    if(size<0) return 0;
    if(dp[n][size]!=-1) return dp[n][size];
    //if(arr[size]>n) return dp[n][size]=coinchange(arr,size)
    return dp[n][size]=(coinchange(arr,size-1,n)+coinchange(arr,size-1,n-arr[n]));
}
int main(int argc, char const *argv[]) {
    int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n=4;
    init(n,m-1);
    printf("%d\n", coinchange(arr,m-1,n));
    return 0;
}
