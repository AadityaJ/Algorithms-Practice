#include <stdio.h>

int findMaxIndex(int *arr,int index,int size){
    if(index==0 || index==size-1){return index;}
    if(arr[index]>arr[index+1] && arr[index]>arr[index-1]){return index;}
    else if(arr[index]<arr[index-1]){return findMaxIndex(arr,index/2,size);}
    else return findMaxIndex(arr,(index+size-1)/2,size);
}
int main(int argc, char const *argv[]) {
    int arr[]={3,4,5,1,2};
    printf("%d\n",findMaxIndex(arr,2,4));
    return 0;
}
