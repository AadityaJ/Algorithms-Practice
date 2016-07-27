#include <stdio.h>
//0-1 knapsack problem
#define MAX 10000
inline int max(int a,int b){
    return (a>b)?a:b;
}
int dp[MAX][MAX];
void init(int size,int weight){
    for(int i=0;i<=size;i++){
        for(int j=0;j<=weight;j++){
            dp[i][j]=-1;
        }
    }
}
int knap(int *val,int *w,int i,int weight){
    if(i==-1 || weight==0) return 0;

    if(w[i]>weight) return dp[i][weight]=knap(val,w,i-1,weight);

    return dp[i][weight]=max(knap(val,w,i-1,weight),val[i]+knap(val,w,i-1,weight-w[i]));
}

int main(int argc, char const *argv[]) {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    init(n,W);
    printf("%d\n", knap(val,wt,n,W));
    return 0;
}
