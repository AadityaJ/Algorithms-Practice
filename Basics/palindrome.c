#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=0,len=0;
	char str[1000];
	scanf("%s",str);
	while(str[len++]!='\0'){}
	len-=2;
	bool flag=1;
	while(i<=len){
		if(str[i]!=str[len]){flag=0;break;}
		i++;
		len--;
	}
	printf("%d\n",flag);
	return 0;
}