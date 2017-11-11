#include <iostream>
#include <string>
#define MX 100
using namespace std;
long long int f(string a,string b,int i,int j,int dp[][MX]){
    if(i==a.length() || j==b.length()) return 0;

    if(dp[i][j]!=-1) return dp[i][j];
    if(a[i]==b[j]) return dp[i][j]=1+f(a,b,i+1,j+1,dp);


    return dp[i][j]=max(f(a,b,i+1,j,dp),f(a,b,i,j+1,dp));

}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string n,m;
        cin>>n>>m;
        int dp[MX][MX];
        for(int i=0;i<=n.length();i++){
            for(int j=0;j<=m.length();j++) dp[i][j]=-1;
        }
        cout<<f(n,m,0,0,dp)<<endl;
    }
    return 0;
}
