#include <stdio.h>
#include <math.h>
int countPath(int x,int y,int max_x,int max_y){
    if(x>max_x || y>max_y) return 0;
    if(x==max_x || y==max_y) return 1;


    return countPath(x+1,y,max_x,max_y)+countPath(x,y+1,max_x,max_y);
}
#include <vector>
int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",countPath(1,1,a,b));
    }
    printf("%lld\n",(long long int)sqrt(16));
    return 0;
}
