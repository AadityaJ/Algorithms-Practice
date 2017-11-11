#include <iostream>
#include <string>
using namespace std;
long long int f(string a,string b,int i,int j){
    if(i==a.length() || j==b.length()) return 0;

    if(a[i]==b[j]) return 1+f(a,b,i+1,j+1);


    return max(f(a,b,i+1,j),f(a,b,i,j+1));

}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string n,m;
        cin>>n>>m;
        cout<<f(n,m,0,0)<<endl;
    }
    return 0;
}
