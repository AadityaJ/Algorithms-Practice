#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int countPalindromeSubstrings(char str[])
{
	int n=strlen(str);
	int dp[n][n];
    memset(dp, 0, sizeof(dp));
    bool P[n][n];
    memset(P, false , sizeof(P));
    for (int i= 0; i< n; i++)
        P[i][i] = true;
    for (int i=0; i<n-1; i++)
    {
        if (str[i] == str[i+1])
        {
            P[i][i+1] = true;
            dp[i][i+1] = 1 ;
        }
    }

    for (int gap=2 ; gap<n; gap++)
    {
        for (int i=0; i<n-gap; i++)
        {
            int j = gap + i;
            if (str[i] == str[j] && P[i+1][j-1] )
                P[i][j] = true;
            if (P[i][j] == true)
                dp[i][j] = dp[i][j-1] + dp[i+1][j] + 1 - dp[i+1][j-1];
            else
                dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1];
        }
    }
    return dp[0][n-1]+n;
}
int main(int argc, char const *argv[]){
	char c[]="a";
	cout<<countPalindromeSubstrings(c)<<endl;
	return 0;
}
