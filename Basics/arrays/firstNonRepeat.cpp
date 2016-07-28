#include <stdio.h>
#include <map>
#include <string>
using namespace std;
char getFirstNon(char *str,int len){
    map<char,int> m;
    for(int i=0;i<len;i++){
        m[str[i]]++;
    }
    for(int i=0;i<len;i++){
        if(m[str[i]]==1) return str[i];
    }
    return '#';
}

int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        int len;
        char str[101];
        scanf("%d",&len);
        scanf("%s",str);
        char res=getFirstNon(str,len);
        if(res!='#') printf("%c\n",res);
        else printf("-1\n");
    }
    return 0;
}
