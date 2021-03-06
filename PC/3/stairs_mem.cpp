#include <iostream>
using namespace std;
long long int f(int n,long long int *dp){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=f(n-1,dp)+f(n-2,dp)+f(n-3,dp);
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int *dp=new long long int(n+1);
        for(int i=0;i<=n;i++) dp[i]=-1;
        cout<<f(n,dp)<<endl;
    }
    return 0;
}
