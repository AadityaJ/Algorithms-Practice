#include <stdio.h>
struct interval{
    int buy;
    int sell;
};
void buySell(int *arr,int n){
    interval sol[n];
    int i=0;
    int count=0;
    while(i<n){
        while(i<n && arr[i]>=arr[i+1]) i++;
        sol[count].buy=i++;
        while(i<n && arr[i]>=arr[i-1]) i++;
        sol[count].sell=i-1;
        //i++;
        count++;
    }
    for(int j=0;j<count;j++){
        printf("(%d %d) ",sol[j].buy,sol[j].sell);
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
        buySell(arr,n);
    }
    return 0;
}
