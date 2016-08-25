#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        int arr[n];
        int lis[n];
        for(int i=0;i<n;i++) lis[i]=1;
        for(int i=0;i<n;i++) cin>>arr[i];
        bool neg=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i]<arr[j] && lis[i]<lis[j]+1 && !neg && (arr[i]>0))
                    {lis[i]=lis[j]+1;neg=1;}
                else if(arr[i]<arr[j] && lis[i]<lis[j]+1 && neg && (arr[i]<0))
                    {lis[i]=lis[j]+1;neg=0;}
            }
        }
        int mx=0;
        for(int i=0;i<n;i++) mx=max(mx,lis[i]);
        cout<<mx<<endl;
    }
    return 0;
}
