#include<stdio.h>
#include<time.h>

void do_something()
{
	for(int i=0;i<100000;i++)
		for(int j=0;j<10000;j++);
}

int main(int arg,char ** argv)
{
	clock_t start=clock();
	do_something();
	clock_t end=clock();
	float time=(float)(end-start)/CLOCKS_PER_SEC;
	printf("%f\n",time);
	return 0;
}