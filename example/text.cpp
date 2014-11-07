#include <stdio.h>
int main()
{
	int n,i;
	int num[100];
	int max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&num[i]);
	}
	max=num[0];
	min=num[0];
	for(i=1;i<n;i++)
	{
		if(num[i]>max)
			max=num[i];
		if(num[i]<min)
			min=num[i];
	}
	printf("%d %d\n",max,min);
	return 0;
}
