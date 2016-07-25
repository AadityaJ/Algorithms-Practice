#include <stdio.h>
#define MAX 51
int arr[MAX][MAX];
void init(int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=0;j<sum;j++)
            arr[i][j]=-1;
    }
}
int abs(int a){
        return (a>0)?(a):(-a);
}
int min(int a,int b){
    return (a<b)?a:b;
}
int dp(int sum1,int sum2,int array[],int i,int n){
    if(i==n) return abs(sum1-sum2);
    if(arr[i][sum1]!=-1) return arr[i][sum1];

    return arr[i][sum1]=min(dp(sum1+array[i],sum2,array,i+1,n),dp(sum1,sum2+array[i],array,i+1,n));
}
int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        //init(n);
        scanf("%d",&n);
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++) {scanf("%d",&arr[i]);sum+=arr[i];}
        init(n,sum);
        printf("%d\n",dp(0,0,arr,0,n));
    }
    return 0;
}
