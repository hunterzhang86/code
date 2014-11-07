#include <stdio.h>

int main()
{
	int i,a[5]={1,2,3,4,5};
	printf("输出元素的正确值：\n");
	for(i=0;i<5;i++)
		printf("a[%d]=%d\t",i,a[i]);
	printf("\n输出超出下标的值：\n");
	for(i=5;i<10;i++)
		printf("a[%d]=%d\t",i,a[i]);
	printf("\n改变数组元素的值：\n");
	a[0]=(a[1]+a[2])*(a[3]+a[4]);
	printf("a[0]=%d\n",a[0]);
	return 0;
}