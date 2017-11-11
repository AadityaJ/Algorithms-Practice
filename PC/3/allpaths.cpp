#include <iostream>
using namespace std;
long long int f(int n,int m,long long int **dp){
    if(n==1 || m==1) return 1;

    if(dp[n][m]!=-1) return dp[n][m];

    return dp[n][m]=f(n-1,m,dp)+f(n,m-1,dp);

}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long int **dp=new long long int* [n+1];
        for(int i=0;i<=n;i++){
            dp[i]=new long long int(n+1);
            for(int j=0;j<=n;j++) dp[i][j]=-1;
        }
        cout<<f(n,m,dp)<<endl;
    }
    return 0;
}
