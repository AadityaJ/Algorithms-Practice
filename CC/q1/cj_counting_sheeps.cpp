#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    for(int itr=1;itr<=t;itr++){
        int n;
        cin>>n;
        if(!n){cout<<"Case #"<<itr<<": INSOMNIA"<<endl;continue;}
        bool digits[10]={0};
        for(int i=1;i;i++){
            int num=i*n;
            for(int j=num;j;j/=10){
                digits[j%10]=1;
            }
            bool flag=0;
            for(int x=0;x<10;x++){
                if(!digits[x]){flag=1;break;}
            }
            if(!flag){cout<<"Case #"<<itr<<": "<<num<<endl;break;}
        }
    }
    return 0;
}
