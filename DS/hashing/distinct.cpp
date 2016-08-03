#include <stdio.h>
#include <map>

using namespace std;

void distncnt(int *arr,int k,int n){
    map<int,int> m;
    int cnt=0;
    for(int i=0;i<k;i++){
        if(m[arr[i]]==0) cnt++;
        m[arr[i]]++;
    }
    printf("%d ",cnt);
    for(int i=k;i<n;i++){
        if(m[arr[i-k]]==1) cnt--;
        m[arr[i-k]]--;
        if(m[arr[i]]==0) cnt++;
        m[arr[i]]++;
        printf("%d ",cnt);
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
        int k;
        scanf("%d",&k);
        distncnt(arr,k,n);
    }
    return 0;
}
