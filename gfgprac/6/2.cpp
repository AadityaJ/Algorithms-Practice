#include <iostream>
#include <vector>
#include <string>
using namespace std;
char charat[27]={' ', 'a', 'b', 'c', 'd', 'e','f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r','s', 't', 'u', 'v', 'w', 'x', 'v', 'z'};
vector<string> v;
void print(int *a,int index, char *buffer, int top, int length){
    if(index==length){
        buffer[top+1]='\0';
        //cout<<buffer<<"  ";
		string str="";
		for(int i=0;i<=top;i++) str.push_back(buffer[i]);
		v.push_back(str);
        return;
    }
    top++;
    buffer[top]=charat[a[index]];
    print(a,index+1,buffer,top,length);
    top--;
    if(index+1>=length)
        return;
    int n=a[index]*10+a[index+1];//cout<<n;
    if(n>26) return;
    top++;
    buffer[top]=charat[n];//cout<<"()";
    print(a,index+2,buffer,top,length);//cout<<"()";
    top--;
    return;
}
void printallpermutations(int *a , int length)
{
    if(length==0)
    {
        cout<<endl<<endl;
        return;
    }
    char buffer[1000];
    print(a,0,buffer,-1,length);
    cout<<endl<<endl;
}

main()
{
    int arr[4] = {1,1,2,3};
    printallpermutations(arr,4);
}
