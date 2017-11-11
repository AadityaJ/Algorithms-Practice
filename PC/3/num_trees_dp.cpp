#include <iostream>
using namespace std;
long long int f(int n,long long int *dp){
    if(n==0) return 1;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    long long int ans=0;
    for(int i=0;i<n;i++){
        ans+=(f(i,dp)*f(n-i-1,dp));
    }
    return dp[n]=ans;
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
