#include <stdio.h>
#include <string>
using namespace std;
inline int max(int a,int b){
    return (a>b)?a:b;
}
int lcs(string str1,string str2,int i,int j){
    if(i==str1.length() || j==str2.length()) return 0;
    if(str1[i]==str2[j]) return 1+lcs(str1,str2,i+1,j+1);

    return max(lcs(str1,str2,i+1,j),lcs(str1,str2,i,j+1));
}
int main(int argc, char const *argv[]) {
    string x="AGGTAB";
    string y="GXTXAYB";
    printf("%d\n",lcs(x,y,0,0));
    return 0;
}
