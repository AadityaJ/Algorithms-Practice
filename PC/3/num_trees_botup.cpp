#include <iostream>
using namespace std;
long long int f(int n,long long int *dp){
    if(n==0) return 1;
    if(n==1) return 1;
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        int ans=0;
        for(int j=0;j<i;j++){
            ans+=(dp[j]*dp[i-j-1]);
        }
        dp[i]=ans;
    }
    return dp[n];
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
