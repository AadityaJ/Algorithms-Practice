#include <stdio.h>
int abs(int a){
        return (a>0)?(a):(-a);
}
int max(int a,int b){
    return (a>b)?a:b;
}
int dp(int sum1,int sum2,int arr[],int i,int n){
    if(i==n) return abs(sum1-sum2);

    return max(dp(sum1+arr[i],sum2,arr,i+1,n),dp(sum1,sum2+arr[i],arr,i+1,n));
}
int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        printf("%d\n",dp(0,0,arr,0,n));
    }
    return 0;
}
