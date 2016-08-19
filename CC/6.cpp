#include <iostream>
using namespace std;
int lp(string str,int i,int j){
    if(i>=j) return 0;
    if(str[i]==str[j]) return 1+lp(str,i+1,j-1);

    return max(lp(str,i+1,j),lp(str,i,j-1));
}
