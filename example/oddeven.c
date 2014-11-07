/*
	将一个数组的奇数放在前面，偶数放在后面
	注意：如果把第二个和第三个while改成if的话，函数最后的p++和q--就不能要了，否则在某些测试用例下会出错，比如5 6 7 3 2 4 6 1 3 4
*/

#include <stdio.h>
#define N 10 

void oddevenSort(int a[],int n)
{
	int *p,*q;
	p=a;
	q=a+n-1;
	while(p<q)
	{
		while(*p%2!=0)	//遇到偶数才停下
			p++;
		while(*q%2==0)	//遇到奇数才停下
			q--;
		if(p<q)	//交换
		{
			int temp=*p;
			*p=*q;
			*q=temp;
		}
		p++;	//交换过的数就不用再判断了
		q--;
	}
}

int main()
{
	int num[N],i;
	for(i=0;i<N;i++)
		scanf("%d",&num[i]);
	oddevenSort(num,N);
	for(i=0;i<N;i++)
		printf("%d ",num[i]);
	printf("\n");
	return 0;
}