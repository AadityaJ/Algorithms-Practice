#include <stdio.h>
#include <map>
using namespace std;

bool isPair(int *arr,int n,int sum){
    map<int,bool> m;
    bool flag=0;
    for(int i=0;i<n;i++){
        if(m[sum-arr[i]]!=0){
            printf("%d %d\n",arr[i],sum-arr[i]);
            flag=1;
        }
        else{m[arr[i]]=1;}
    }
    return flag;
}
int main(int argc, char const *argv[]) {
    int arr[]={1,2,3,4,5};
    int n=6;
    int sum=9;
    printf("%d\n",isPair(arr,n,sum));
    return 0;
}
