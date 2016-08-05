#include <iostream>
#include <map>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        std::map<int,int> cnt;
        std::map<int,bool> done;
        for(int i=0;i<n;i++){
            cnt[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(cnt[arr[i]]%2==0 && !done[arr[i]]) {printf("%d ",arr[i]);done[arr[i]]=1;}
        }
    }
    return 0;
}
