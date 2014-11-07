/*确定进制问题*/

#include <stdio.h>
#include <string.h>

int b2ten(char *x,int b)
{
	int i,len,ret=0;
	len=strlen(x);
	for(i=0;i<len;i++)
	{
		if((x[i]-'0')>=b) return -1;
		ret=ret*b;
		ret=ret+(x[i]-'0');
	}
	return (long)ret;
}

int main()
{
	int n;
	char p[8],q[8],r[8];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s %s %s",p,q,r);
		int b;
		long pAlgorism,qAlgorism,rAlgorism;
		for(b=2;b<=16;b++)
		{
				pAlgorism=b2ten(p,b);
				qAlgorism=b2ten(q,b);
				rAlgorism=b2ten(r,b);
				if(pAlgorism==-1||qAlgorism==-1||rAlgorism==-1)	continue;
				if(rAlgorism==pAlgorism*qAlgorism)	
					{
						printf("%d\n",b);
						break;
				  }
		}
		if(b>=17)	
			{
				printf("0\n");
			}
	}	
	getchar();
	return 0;
	
}
