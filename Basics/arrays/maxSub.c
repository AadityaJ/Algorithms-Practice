#include <stdio.h>
inline int max(int a,int b){return (a>b)?a:b;}
int maxSubArr(int *arr,int n){
    int max_tot=0;
    int max_sub=0;
    for(int i=0;i<n;i++){
        if(max_sub+arr[i]>0) max_sub+=arr[i];
        if(max_sub>max_tot) max_tot=max_sub;
    }
    return max_tot;
}

/*int maxSubArrDP(int *arr,int n){
    int max_tot=0;
    int max_sub=0;
    for(int i=0;i<n;i++){
        max_sub=max(a[i],max_sub+a[i]);
        max_tot=max(max_tot,max_tot+max_sub);
    }
    return max_tot;
}/*
int main(int argc, char const *argv[]) {
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    printf("%d\n",maxSubArr(arr,8));
    return 0;
}
