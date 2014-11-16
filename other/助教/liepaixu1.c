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
	FILE *fp1=fopen("in.txt","r"),*fp2=fopen("out.txt","w");
	int num[4][10],i,j;
	for(i=0;i<4;i++)
		for(j=0;j<10;j++)
			fscanf(fp1,"%d",&num[i][j]);
	sort(num);
	for(i=0;i<4;i++)
	{
		for(j=0;j<10;j++)
			fprintf(fp2,"%d\t",num[i][j]);
		fprintf(fp2,"\n");
	}
	return 0;
}
