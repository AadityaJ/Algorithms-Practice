#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        int lis[n];
        for(int i=0;i<n;i++) lis[i]=1;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if((arr[i]<arr[j] && lis[i]<lis[j]+1) || j==m)
                    lis[i]=lis[j]+1;
            }
        }
        int mx=0;
        for(int i=0;i<n;i++) mx=max(mx,lis[i]);
        cout<<mx<<endl;
    }
    return 0;
}
