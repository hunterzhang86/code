/*校门外的数*/

#include <stdio.h>
int main()
{
	int L,i,j,n,count=0;
	bool trees[10001];
	for(i=0;i<10001;i++)
		trees[i]=true;
	scanf("%d %d\n",&L,&n);
	for(i=0;i<n;i++)
	{
		int end,begin;
		scanf("%d %d",&begin,&end);
		for(j=begin;j<=end;j++)
			trees[j]=false;
		}
	for(i=0;i<=L;i++)
		if(trees[i]) count++;
	printf("%d\n",count);
	getchar();
	return 0;
	
}
	