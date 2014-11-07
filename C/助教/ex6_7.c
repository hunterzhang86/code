#include <stdio.h>

long fac(int n)
{
	long result;
	if(n==0||n==1)
		result=1;
	else
		result=n*fac(n-1);
	return result;
}

int main()
{
	int n;
	long f;
	printf("Please enter value of n:\n");
	scanf("%d",&n);
	if(n<=0)
		printf("Sorry! You enter a wrong number!\n");
	else{
		f=fac(n);
		printf("%d!=%ld\n",n,f);
	}
	return 0;

}