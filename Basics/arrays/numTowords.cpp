#include <stdio.h>
#include <string>
string numTostr(int num){
    switch (num) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
    }
}
int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n/999>1){
            int a=n%1000;
            printf("%s thousand",numTostr(a));
            int b=
        }
    }
    return 0;
}
