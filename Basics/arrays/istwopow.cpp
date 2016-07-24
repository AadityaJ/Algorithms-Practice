#include <stdio.h>
bool isPowTwo(int n){
    return !(n&(n-1));
}
int main(int argc, char const *argv[]) {
    int t=128;
    int x=127;
    printf("%d\n",isPowTwo(t));
    printf("%d\n",isPowTwo(x));
    return 0;
}
