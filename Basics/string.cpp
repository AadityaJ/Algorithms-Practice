#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
    string str="this is the real deal";
    int len=str.length();
    //char sub[len][len];
    int j=0,i=0;
    while(j<len){
        string sub;
        for(i=j;str[j+i]!=' ';i++){
            sub+=str[i+j];
        }
        cout<<sub<<endl ;
        j=i+1;
    }
    return 0;
}
