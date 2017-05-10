#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
// dumb and stupid
/*
int lcs( string X, string Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[m][n];
}
int max(int a, int b)
{
    return (a > b)? a : b;
}*/
bool lcs(string s1,string s2){
	int s1_index=0;
	for(int i=0;i<s2.length();i++){
		if(s1[s1_index]==s2[i]) s1_index++;
	}
	//cout<<s1_index;
	return (s1_index==s1.length());
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		//int x=lcs(s1,s2);
		cout<<lcs(s1,s2)<<endl;
	}
	return 0;
}
