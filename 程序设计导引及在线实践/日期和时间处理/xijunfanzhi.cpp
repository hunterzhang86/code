/*ϸ����ֳ*/

#include <stdio.h>

int main()
{
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int month_1,day_1,month_2,day_2,num;
		scanf("%d%d%d%d%d",&month_1,&day_1,&num,&month_2,&day_2);
		int sum=0;
		for(int k=month_1;k<month_2;k++){
			sum+=days[k-1];	
		}	
		sum-=day_1;
		sum+=day_2;
		
		long nNum=num;
		for(k=0;k<sum;k++){
			nNum*=2;	
		}
		printf("%d\n",nNum);
	}
	getchar();
	return 0;

}