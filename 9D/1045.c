#include <stdio.h>

int main()
{
	freopen("1045.in","r",stdin);
	int n;
	int i,j,k;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<=100;i++)
			for(j=0;j<=100;j++)
				for(k=0;k<=100;k++)
				{
					if((5*i+3*j+k/3.0)<=n&&(i+j+k)==100)
						printf("x=%d,y=%d,z=%d\n",i,j,k);
				}
	}
	return 0;
}
