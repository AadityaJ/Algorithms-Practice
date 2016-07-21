#include <iostream>
#include <string>
using namespace std;
void preCalc(string str,int *table){
    int len=0;
    int i=1;
    table[0]=0;
    while(i<str.length()){
        if(str[i]==str[len]){
            len++;
            table[i]=i;
            i++;
        }
        else{
            if(len!=0){
                len=table[i-1];
            }
            else{
                table[i]=0;
                i++;
            }
        }

    }

}
void isSubstr(string str,string substr){
    int table[substr.length()];
    preCalc(substr,table);
    int i=0;
    int j=0;
    while(i<str.length()){
        if(str[i]==substr[j]){
            i++;j++;
        }
        else{
            if(j==substr.length()){
                printf("String found at %d\n",(str.length()-j));
                j=table[j-1];
            }
            else if(i<str.length() && str[i]!=substr[j]){
                if(j!=0) j=table[j-1];
                else i=i+1;
            }
        }
    }
}
int main(int argc, char const *argv[]) {
    string s="abcdabcd";
    string sub="cd";
    isSubstr(s,sub);
    return 0;
}
