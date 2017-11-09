#include <bits/stdc++.h>
using namespace std;
void f(char *first,char *second,int i,int j,int n1,int n2,string str){
    if(i==n1 &&j==n2) {cout<<str<<endl;return;}

    if(i!=n1) f(first,second,i+1,j,n1,n2,str+(first[i]));

    if(j!=n2) f(first,second,i,j+1,n1,n2,str+(second[j]));
}
void interleaving(char* first, char* second) {
	// Write your code here
    string str="";
    int n1=strlen(first);
    int n2=strlen(second);

    f(first,second,0,0,n1,n2,str);
}
