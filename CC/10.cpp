#include <iostream>
#include <string>
using namespace std;
int dpmem[2001][4];
void init(){
    for(int i=0;i<2001;i++){
        for(int j=0;j<4;j++) dpmem[i][j]=-1;
    }
}
int dp(string str1,string sub,int i,int j){
    if(i==str1.length()){
        return j==3;
    }
    if(dpmem[i][j]!=-1) return dpmem[i][j];
    if(str1[i]==sub[j]) return dpmem[i][j]=dp(str1,sub,i+1,j+1)+dp(str1,sub,i+1,j);/*return dpmem[i][j]=*/
    else return dpmem[i][j]=dp(str1,sub,i+1,j);/*dpmem[i][j]=*/
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        init();
        string str;
        cin>>str;
        string sub="KEK";
        cout<<dp(str,sub,0,0)<<endl;
    }
    return 0;
}
