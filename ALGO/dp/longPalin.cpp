#include <stdio.h>
#include <string>
#define MAX 10000
using namespace std;
inline int max(int a,int b){
    return (a>b)?a:b;
}
int dp[MAX][MAX];
void init(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            dp[i][j]=-1;
    }
}
int longPalin(string str,int i,int j){
    if(j<i) return 0;
    if(i==j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(str[i]==str[j]) return dp[i][j]=2+longPalin(str,i+1,j-1);

    return dp[i][j]=max(longPalin(str,i+1,j),longPalin(str,i,j-1));
}
int main(int argc, char const *argv[]) {
    string s="GEEKSFORGEEKS";
    init(s.length());
    printf("%d\n",longPalin(s,0,s.length()-1));
    return 0;
}
