/*
	��һ���������������ǰ�棬ż�����ں���
*/

#include <stdio.h>
#include <fstream>
#define N 10 

void oddevenSort(int a[],int n)
{
	int *p,*q;
	p=a;
	q=a+n-1;
	while(p<q)
	{
		while(*p%2!=0)	//����ż����ͣ��
			p++;
		while(*q%2==0)	//����������ͣ��
			q--;
		if(p<q)	//����
		{
			int temp=*p;
			*p=*q;
			*q=temp;
		}
		p++;	//�����������Ͳ������ж���
		q--;
	}
}

int main()
{
	int num[N],i;
	ifstream cin("aaa.txt");
	for(i=0;i<N;i++)
		scanf("%d",&num[i]);
	oddevenSort(num,N);
	for(i=0;i<N;i++)
		printf("%d ",num[i]);
	printf("\n");
	return 0;
}