#include <stdio.h>

int main(int argc, char const *argv[]) {
    bool arr[101];
    for(int i=1;i<=100;i++){
        arr[i]=1;
    }
    for(int i=2;i<=100;i++){
        for(int j=i;j<=100;j+=i){
            arr[j]=((arr[j]?0:1));
        }
    }
    for(int i=1;i<=100;i++){
        if(arr[i])printf("%d\n",i);
    }
    return 0;
}
