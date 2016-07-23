#include <stdio.h>
#include <algorithm>
using namespace std;
bool isPairSum(int *arr,int n,int sum){
    bool flag=0;
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==sum){printf("Found at %d %d\n",i,j);flag=1;i++;j--;}
        else if(arr[i]+arr[j]>sum){j--;}
        else i++;
    }
    return flag;
}
int main(int argc, char const *argv[]) {
    int arr[]={1,2,3,4,5};
    printf("%d\n",isPairSum(arr,5,9));
    return 0;
}
