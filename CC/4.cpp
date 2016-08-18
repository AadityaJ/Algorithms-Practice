#include <iostream>
#include <string>
using namespace std;
int lp(string str,int i,int j){
    if(i>=j) return 0;
    if(str[i]==str[j]) return 1+lp(str,i+1,j-1);

    return max(lp(str,i+1,j),lp(str,i,j-1));
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int palin=lp(str,0,str.length());
        cout<<palin*2;
        cout<<(str.length()-palin)<<endl;
    }
    return 0;
}
