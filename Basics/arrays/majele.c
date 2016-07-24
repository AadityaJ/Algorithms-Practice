#include <stdio.h>
int findCand(int arr[],int n){
    int count=1;
    int maj_ele=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[maj_ele]){count++;}
        else count--;
        if(!count){
            count=1;maj_ele=i;
        }
    }
    return arr[maj_ele];//isMaj(arr[maj_ele],arr,n);
}
/*int isMaj(int x,int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==x) count++;
    }

}*/
int main(int argc, char const *argv[]) {
    int arr[]={3,3,4,2,4,4,2,4,4};
    int n=9;
    printf("%d\n",findCand(arr,n));
    return 0;
}
