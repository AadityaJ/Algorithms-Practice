#include <iostream>
using namespace std;
long long int f(int n,long long int *dp){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]);
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
