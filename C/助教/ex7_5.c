#include <stdio.h>

int main()
{
	char str1[12],str2[12],str3[12];
	int i;
	printf("用gets()/puts()\n");
	gets(str1);
	puts(str1);
	printf("用scanf()/printf()单个\n");
	for(i=0;i<12;i++)
		scanf("%c",&str2[i]);
	for(i=0;i<12;i++)
		printf("%c",str2[i]);
	printf("\n");
	printf("用scanf()/printf()整体\n");
	scanf("%s",str3);
	printf("%s",str3);
	printf("\n");

}