#include <stdio.h>

int main()
{
	char str1[12],str2[12],str3[12];
	int i;
	printf("��gets()/puts()\n");
	gets(str1);
	puts(str1);
	printf("��scanf()/printf()����\n");
	for(i=0;i<12;i++)
		scanf("%c",&str2[i]);
	for(i=0;i<12;i++)
		printf("%c",str2[i]);
	printf("\n");
	printf("��scanf()/printf()����\n");
	scanf("%s",str3);
	printf("%s",str3);
	printf("\n");

}