//http://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/
#include <stdio.h>
int getOddOccr(int *arr,int n){
    int x=arr[0];
    for(int i=1;i<n;i++) x=x^arr[i];
    return x;
}
int main(int argc, char const *argv[]) {
    int arr[]={2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    printf("%d\n",getOddOccr(arr,13));
    return 0;
}
