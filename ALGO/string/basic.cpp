// naive search
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    string s;
    string sub;
    cin>>s;
    cin>>sub;
    for(int i=0;i<s.length()-sub.length();i++){
        if(s[i]==sub[0]){
            int j;
            for(j=1;j<sub.length();j++){
                if(s[i+j]!=sub[j]) break;
            }
            if(j==sub.length()) printf("Found string at index %d\n",i);
        }

    }
    return 0;
}
