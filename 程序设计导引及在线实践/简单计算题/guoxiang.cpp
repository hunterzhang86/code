/*例2.2 国际象棋问题(运行结果不对)*/

#include <stdio.h>
#include <math.h>
int main()
{
	int nCase,i;
	scanf("%d",&nCase);
	for(i=0;i<nCase;i++){
		char begin[2],end[2];
		scanf("%s %s",begin,end);
		int x,y;
		x=abs(begin[0]-end[0]);
		y=abs(begin[1]-end[1]);
		if(x==0&&y==0)
			printf("0 0 0 0\n");
		else{
			if(x<y) printf("%d",y);
				else	printf("%d",x);
			if(x=y||x==0||y==0)	printf(" 1");
				else	printf(" 2");
			if(x==0||y==0)	printf(" 1");
				else	printf(" 2");
			if(abs(x-y)%2!=0)	printf(" Inf\n");
				else if(x==y) printf(" 1\n");
				else printf(" 2\n");
			}
		}
	getchar();
	return 0;
	
}
	
