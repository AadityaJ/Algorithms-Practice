#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
string retStr(int num){
    switch(num){
        case 1: return " ";
        case 2: return "abc";
        case 3: return "def";
        case 4: return "ghi";
        case 5: return "jkl";
        case 6: return "mno";
        case 7: return "pqrs";
        case 8: return "tuv";
        case 9: return "wxyz";
    }
}
void printAll(int *arr,int i,int n,string output){
    if(i==n) {cout<<output<<" ";return ;}
    string str = retStr(arr[i]);
    if(str.length()==3){
        printAll(arr,i+1,n,output+str[0]);
        printAll(arr,i+1,n,output+str[1]);
        printAll(arr,i+1,n,output+str[2]);
    }
    else{
        printAll(arr,i+1,n,output+str[0]);
        printAll(arr,i+1,n,output+str[1]);
        printAll(arr,i+1,n,output+str[2]);
        printAll(arr,i+1,n,output+str[3]);
    }
}
int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        string str;
        printAll(arr,0,n,str);
    }
    return 0;
}
