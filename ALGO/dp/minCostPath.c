//http://www.geeksforgeeks.org/dynamic-programming-set-6-min-cost-path/
#include <stdio.h>
#include <limits.h>
inline int min(int a,int b,int c){
    return (a<b)?((a<c)?a:c):((b<c)?b:c);
}
int dp[1000][1000];
void init(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            dp[i][j]=-1;
    }
}
int minCostPath(int arr[3][3],int n,int i,int j){
    if(i<0 || j<0) return INT_MAX;
    if(i==0 && j==0) return arr[i][j];

    return arr[i][j]+min(minCostPath(arr,n,i-1,j),minCostPath(arr,n,i,j-1),minCostPath(arr,n,i-1,j-1));
}
int main(int argc, char const *argv[]) {
    //r=c=3;
    init(3);
    int cost[3][3] = { {1, 2, 3},
                       {4, 8, 2},
                       {1, 5, 3} };
    printf("%d\n",minCostPath(cost,2,2,2));
    return 0;
}
