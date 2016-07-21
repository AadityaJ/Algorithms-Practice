#include <stdio.h>
#include <string>
#define MAX 256
using namespace std;
bool compare(int arr1[],int arr2[]){
    for(int i=0;i<MAX;i++)
        if(arr1[i]!=arr2[i]) return false;
    return true;
}
void isAnag(string str,string pat){
    int arr1[MAX]={0},arr2[MAX]={0};
    for(int i=0;i<pat.size();i++){
        arr1[str[i]]++;
        arr2[str[i]]++;
    }
    for(int i=pat.size();i<str.size();i++){
        if(compare(arr1,arr2)){printf("Found anagram in string at position %d\n",i);}
        arr1[str[i-pat.size()]]--;
        arr1[str[i]]++;
    }
    if(compare(arr1,arr2)){printf("Found anagram in string at position %d\n",str.size()-pat.size());}
}
int main(int argc, char const *argv[]) {
    string str="rainofcastermere";
    string pat="foin";
    isAnag(str,pat);
    return 0;
}
