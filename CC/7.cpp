#include <iostream>
#include <string>
using namespace std;
inline int max3(int a,int b,int c){
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
int dp(string str1,string str2,int aux,int i,int j,int count,int k){
    if(str1.length()==i || str2.length()==j){
        //cout<<i<<" "<<j<<" "<<count<<endl;
        if(count==k){
            return aux;
        }
        else return 0;
    }
    if(str1[i]==str2[j]) return max3(dp(str1,str2,aux+(int)str1[i],i+1,j+1,count+1,k),dp(str1,str2,aux,i+1,j,count,k),dp(str1,str2,aux,i,j+1,count,k));

    else return max(dp(str1,str2,aux,i+1,j,count,k),dp(str1,str2,aux,i,j+1,count,k));

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
