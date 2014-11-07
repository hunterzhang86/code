#include <stdio.h>

int main()
{
	int a[20];
	_int64 ans=0;
	int n;
	_int64 tmp;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++){
			tmp=1;
			for(int j=i;j<n;j++){
				tmp*=a[j];
				if(tmp>ans)	ans=tmp;
			}
		}
		if(ans>0)
			printf("%I64d\n",ans);
		else
			printf("%d\n",-1);
	}
	return 0;
}