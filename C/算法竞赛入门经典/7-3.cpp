#include <stdio.h>

int main()
{
	int k;
	int x,y,count=0;
	while(scanf("%d",&k)!=EOF){
		for(y=k+1;y<=2*k;y++){
			x=(k*y)/(y-k);
			if(x*(y-k)==k*y){	//判断x是不是整数
				count++;
			}
		}
		printf("%d\n",count);
		for(y=k+1;y<=2*k;y++){
			x=(k*y)/(y-k);
			if(x*(y-k)==k*y){
				printf("1/%d=1/%d+1/%d\n",k,x,y);
			}
		}
	}
	return 0;
}