#include <iostream>
#include <string>
#define MAX 256
using namespace std;
bool cmp(char *arr1,char *arr2){
    for(int i=0;i<MAX;i++){
        if(arr1[i]!=arr2[i]) return 0;
    }
    return 1;
}
int retCount(string str,string substr){
    char countP[MAX]={0},countText[MAX]={0};
    for(int i=0;i<substr.length();i++) countP[substr[i]]++;
    for(int i=0;i<substr.length();i++) countText[str[i]]++;
    int cnt=0;
    if(cmp(countP,countText)) cnt++;
    for(int i=substr.length();i<str.length();i++){
        countText[str[i-substr.length()]]--;
        countText[str[i]]++;
        if(cmp(countP,countText)) cnt++;
    }
    return cnt;

}

int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        string str,substr;
        cin>>str;
        cin>>substr;
        printf("%d\n",retCount(str,substr));
    }
    return 0;
}






























/*#include <map>
#include <stdio.h>
#include <string>
using namespace std;
// O(nm)
int cntOccr(string str,string substr){
    map<char,int> sub;
    map<char,int> tex;
    for(int i=0;i<substr.length();i++) sub[substr[i]]++;
    int cnt=0;
    for(int i=0;i<substr.length();i++) tex[str[i]]++;
    for(int i=substr.length();i<str.length();i++){
        bool isana=1;
        for(int j=0;j<substr.length();j++){
            if()
        }
    }
}
// this is tough
// lets use rabin karp instead*/
