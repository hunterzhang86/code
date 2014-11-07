#include <stdio.h>

int max(int x,int y)
{
	return (x>y)?x:y;
}

int MaxSum(int *A,int n)
{
	int nStart=A[n-1];
	int nAll=A[n-1];
	int i;
	for(i=n-2;i>=0;i--)
	{
		nStart=max(A[i],nStart+A[i]);
		nAll=max(nStart,nAll);
	}
	return nAll;
}

int main()
{
	int A[6]={0,-2,3,5,-1,2};
	printf("%d\n",MaxSum(A,6));
	return 0;
}