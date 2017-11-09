#include <bits/stdc++.h>
using namespace std;
long long f(int n,int i,string str){
    if(i==n) {return 1;}
    if(i==n-1) {return 1;}

    if(str[i-1]=='R')
        return f(n,i+1,str+"W")+f(n,i+2,str+"BW");
    if(str[i-1]=='W')
        return f(n,i+1,str+"R")+f(n,i+2,str+"BR");
}
long long find_Ways(int N)
{
    /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Taking input and printing output is handled automatically.
  */
  return f(N,1,"R")+f(N,1,"W");

}
