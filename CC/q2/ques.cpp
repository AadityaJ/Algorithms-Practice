#include <map>
#include <iostream>
#include <string>
#define MAX 101
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    for(int itr=1;itr<=t;itr++){
        int n;
        cin>>n;
        //string str[MAX];
        char str_char[MAX];
        string str[MAX];
        int len=0;
        for(int i=0;i<=n;i++) cin.getline(str[i],MAX);//cin>>str[i];
        cout<<str[0];
        char count[MAX][MAX];
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++) count[i][j]=0;
        }
        //for(int i=0;i<n;i++) count[i]={0};
        int arr[MAX];
        for(int i=0;i<n;i++){
            arr[i]=0;
            for(int j=0;j<str[i].length();j++){
                if(!count[i][(str[i][j]-'0')]){
                    arr[i]++;
                    count[i][(str[i][j]-'0')]++;
                }
            }
        }
        int max=0,index=0;
        for(int i=0;i<n;i++){
            if(max<arr[i]){max=arr[i];index=i;}
        }
        cout<<"Case #"<<itr<<": "<<str[index]<<endl;
    }
    return 0;
}
