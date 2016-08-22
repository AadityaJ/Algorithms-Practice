#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,temp,c=0;
        string str;
        cin>>n;
        cin>>str;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp%2==0) c++;
        }
        if(n==1 && c==1 && str.compare("Dee")==0) cout<<"Dee\n";
        else cout<<"Dum\n";

    }
    return 0;
}
