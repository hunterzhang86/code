#include <stdio.h>

int main()
{
	int i,a[5]={1,2,3,4,5};
	printf("���Ԫ�ص���ȷֵ��\n");
	for(i=0;i<5;i++)
		printf("a[%d]=%d\t",i,a[i]);
	printf("\n��������±��ֵ��\n");
	for(i=5;i<10;i++)
		printf("a[%d]=%d\t",i,a[i]);
	printf("\n�ı�����Ԫ�ص�ֵ��\n");
	a[0]=(a[1]+a[2])*(a[3]+a[4]);
	printf("a[0]=%d\n",a[0]);
	return 0;
}