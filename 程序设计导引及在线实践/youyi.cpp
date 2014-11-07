#include <stdio.h>
#include <iostream>
int main()
{
    int n1=15;
	short n2=-15;
	unsigned short n3=0xffe0;
	unsigned char c=15;
	n1=n1>>2;
	n2<<=3;
	n3>>=4;
	c>>=3;
	printf("n1=%x,n2=%d,n3=%x,c=%x\n",n1,n2,n3,c);
	return 0;
}