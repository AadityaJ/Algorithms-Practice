#include <stdio.h>
#include <string>
#define MAX 1000
using namespace std;
int dp[MAX][MAX];
//int counter=0;
void init(int a,int b){
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++)
            dp[i][j]=-1;
    }
}
inline int max(int a,int b){
    return (a>b)?a:b;
}
int lcs(string str1,string str2,int i,int j){
    if(i==str1.length() || j==str2.length()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    //counter++;
    if(str1[i]==str2[j]) return 1+lcs(str1,str2,i+1,j+1);

    return dp[i][j]=max(lcs(str1,str2,i+1,j),lcs(str1,str2,i,j+1));
}
int main(int argc, char const *argv[]) {
    string x="AGGTAB";
    string y="GXTXAYB";
    init(x.length(),y.length());
    printf("%d\n",lcs(x,y,0,0));
    //printf("%d\n",counter);
    return 0;
}
