#include <stdio.h>

int cat(int n){
    int prod=1;
    int x=0;
    for(int i=(2*n);i>(n+1);i--) {prod*=i; prod/=(n-x);x++;}
    //for(int i=1;i<=n;i++) prod/=i;
    return prod;
}
int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%d\n",cat(n));
    }
    return 0;
}
