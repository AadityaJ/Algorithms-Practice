#include <stdio.h>
#include <map>
using namespace std;
bool isSumPair(int *arr,int sum,int x,int n){
    map<int,bool> m;
    for(int i=x;i<n;i++){
        m[arr[i]]=0;
    }
    for(int i=x;i<n;i++){
        if(m[sum-arr[i]]) return 1;
        m[arr[i]]=1;
    }
    return 0;
}
bool isThreePair(int *arr,int n,int sum){
    for(int i=0;i<n;i++){
        if(sum-arr[i]<0) continue;
        if(isSumPair(arr,sum-arr[i],i,n)) return 1;
    }
    return 0;
}
int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum;
        scanf("%d %d",&n,&sum);
        int arr[n];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        printf("%d\n",isThreePair(arr,n,sum));
    }
    return 0;
}
