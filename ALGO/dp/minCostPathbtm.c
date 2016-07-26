//http://www.geeksforgeeks.org/dynamic-programming-set-6-min-cost-path/
//bottom up version
#include <stdio.h>
#include <limits.h>
inline int min(int a,int b,int c){
    return (a<b)?((a<c)?a:c):((b<c)?b:c);
}
int dp[1000][1000];
int count;
void init(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            dp[i][j]=-1;
    }
    count=0;
}
int minCostPath(int arr[3][3],int n){
    dp[0][0]=arr[0][0];
    for(int i=1;i<=n;i++) dp[i][0]=dp[i-1][0]+arr[i][0];
    for(int i=1;i<=n;i++) dp[0][i]=dp[0][i-1]+arr[0][i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=min(dp[i-1][j],dp[i-1][j-1],dp[i][j-1])+arr[i][j];
        }
    }
    return dp[n][n];
}
int main(int argc, char const *argv[]) {
    //r=c=3;

    init(3);
    int cost[3][3] = { {1, 2, 3},
                       {4, 8, 2},
                       {1, 5, 3} };
    printf("%d\n",minCostPath(cost,2));
    printf("%d\n",count);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) printf("%d ",dp[i][j]);
        printf("\n");
    }
    return 0;

}
