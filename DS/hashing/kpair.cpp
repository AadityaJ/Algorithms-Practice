#include <stdio.h>
#include <map>
using namespace std;

bool isCopy(int *arr,int n,int k){
    map <int,bool> m;
    for(int i=0;i<k;i++){
        m[arr[i]]=1;
    }
    for(int i=k;i<n;i++){
        if(m.find(arr[i])!=m.end()) return 1;
        m.erase(arr[i-k]);
        m[arr[i]]=1;
    }
    return 0;
}
int main(int argc, char const *argv[]) {
    int k=3;
    int arr[]={1, 2, 3, 1, 4, 5};
    printf("%d\n",isCopy(arr,6,k));
    return 0;
}
