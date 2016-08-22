#include <stdio.h>
#include <string.h>
int main()
{
	char s[10];
	int t,n,i,a,w;
	scanf("%d",&t);
	while(t--)
	{
		w=0;
		scanf("%d%s",&n,s);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a%2==0)
			w++;
		}
		if(n==1&&w==1&&strcmp(s,"Dee")==0)
		printf("Dee\n");
		else
		printf("Dum\n");
	}
	return 0;
}
