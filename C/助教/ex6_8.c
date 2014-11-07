#include <stdio.h>

long fib(int n)
{
	if(n==1||n==2)
		return n-1;
	else
		return fib(n-1)+fib(n-2);

}

int main()
{
	int i=1;
	unsigned result;
	do{
		scanf("%d",&i);
		result=fib(i);
		printf("fib(%d)=%d\n",i,result);
	}while(i>0);
	return 0;

}

