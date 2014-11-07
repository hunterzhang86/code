#include <stdio.h>

void print()
{
	printf("yes\n");
}

int main()
{
	int i;
	for(i=0;i<100;i++)
		printf("%d ",i);
	printf("hello world\n");
	print();
	return 0;
	
}
