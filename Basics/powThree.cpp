#include <iostream>
#include <math.h>
#include <string>
using namespace std;
inline int abs(int a){
    return (a>0)?(a):(-a);
}
bool intnum(int n){
    if(n<0) return false;
    if(n==0) return true;
    if(n==1) return false;
    int even_count=0;
    int odd_count=0;
    while(n){
        if(n&1) odd_count++;
        n=n<<1;
        if(n&1) even_count++;
    }
    return intnum(abs(odd_count-even_count));
}
bool isPow(string str){
    int n=0,pow_2=0;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]=='1') n+=pow(2,pow_2);
        pow_2++;
    }
    return intnum(n);
}

int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<!isPow(str)<<endl;
    }
    return 0;
}
