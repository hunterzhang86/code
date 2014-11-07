#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int i,j;
	int an[5];	
	for(i=0;i<5;i++)
	cin >>an[i];	
	for(i=0;i<=5-1;i++)
	{
		int nTmpMin=i;
		for(j=i;j<5;j++)
		{
			if(an[j]<an[nTmpMin])
				nTmpMin=j;
		}
			int nTmp=an[i];
			an[i]=an[nTmpMin];
			an[nTmpMin]=nTmp;
	}
		
		for(i=0;i<5;i++)
		cout <<an[i]<<" ";
		getchar();
		return 0;
}
