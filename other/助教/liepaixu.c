#include <stdio.h>

void sort(int num[4][10])
{
	int i,j,k,tmp;
	for(i=0;i<10;i++)
		for(j=0;j<4;j++)
			for(k=0;k<3-j;k++)
			{
				if(num[k][i]<num[k+1][i])
				{
					tmp=num[k][i];
					num[k][i]=num[k+1][i];
					num[k+1][i]=tmp;
				}
			}
}

int main()
{
//	freopen("in.txt","r",stdin);
//	freopen("out.txt","w",stdout);
	int num[4][10],i,j;
	for(i=0;i<4;i++)
		for(j=0;j<10;j++)
            num[i][j]=rand()%100;
			//scanf("%d",&num[i][j]);
	sort(num);
	for(i=0;i<4;i++)
	{
		for(j=0;j<10;j++)
			printf("%d\t",num[i][j]);
		printf("\n");
	}
	return 0;
}
