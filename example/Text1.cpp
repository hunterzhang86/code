#include <stdio.h>
#include <string.h>

void inverseOutput(char *str)
{
	char *pstr = str+strlen(str)-1;
	while (pstr>=str)
		printf("%c",*pstr--);
}


int main()
{
	inverseOutput("This is a test string!");

	return 0;
}