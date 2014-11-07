#include<stdio.h>
int main()
{
    freopen("2025.in","r",stdin);
	char a[100],max;
	int i;
	while(gets(a))
	{
		max=a[0];
		for(i=1;a[i]!='\0';i++)
			if(max<a[i])
				max=a[i];
		for(i=0;a[i]!='\0';i++)
		{

			printf("%c",a[i]);
			if(a[i]==max)
				printf("(max)");
		}
		printf("\n");
	}
	return 0;
}
