#include <iostream>
#include <string>
using namespace std;

int dp(string str1,string sub,int i,int j){
    if(i==str1.length()){
        return j==3;
    }
    if()
    //return dp(str1,sub,i+1)+dp(str1,sub+str1[i],i+1);
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string sub="";
        cout<<dp(str,sub,0)<<endl;
    }
    return 0;
}
