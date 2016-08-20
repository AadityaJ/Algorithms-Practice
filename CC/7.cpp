#include <iostream>
#include <string>
using namespace std;
int dp(string str1,string str2,int aux,int i,int j,int count,int k){
    if(str1.length()==i || str2.length()==j){
        if(count==k){
            return aux;
        }
    }
    if(str1[i]==str2[j]) return dp(str1,str2,aux)

}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        int k;
        cin>>k;
        cout<<dp(a,b,0,0,0,0,k);
    }
    return 0;
}
