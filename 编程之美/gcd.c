#include <stdio.h>

int isEven(int n)
{
	if(n%2==0)	
		return 1;
	else	
		return 0;
}

int gcd(int x,int y)
{
	if(y>x)
		return gcd(y,x);
	if(y==0)
		return x;
	else
	{
		if(isEven(x))
		{
			if(isEven(y))
				return (gcd(x>>1,y>>1)<<1);
			else
				return (gcd(x>>1,y));
		}
		else
		{
			if(isEven(y))
				return (gcd(x,y>>1));
			else
				return (gcd(y,x-y));
		}
	}
}

int main()
{
	printf("%d\n",gcd(166,188));
	return 0;
}