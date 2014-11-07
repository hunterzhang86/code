#include <stdio.h>

void Expfun2(float a[4]);

int main()
{
	float s[4]={88.5,90.5,70,71};
	printf("1\n");
	printf("s[0]=%4.1f\n s[1]=%4.1f\n s[2]=%4.1f\n s[3]=%4.1f\n",s[0],s[1],s[2],s[3]);
	Expfun2(s);
	printf("3\n");
	printf("s[0]=%4.1f\n s[1]=%4.1f\n s[2]=%4.1f\n s[3]=%4.1f\n",s[0],s[1],s[2],s[3]);
}

void Expfun2(float a[4])
{
	float sum;
	sum=a[0]+a[1]+a[2]+a[3];
	a[0]=a[0]/10;
	a[1]=a[1]/10;
	a[2]=a[2]/10;
	a[3]=a[3]/10;
	printf("2\n");
	printf("a[0]=%4.1f\n a[1]=%4.1f\n a[2]=%4.1f\n a[3]=%4.1f\n",a[0],a[1],a[2],a[3]);
}