/*skew��*/

#include <stdio.h>
#include <string.h>

int main()
{
	int i,k,base[31],sum;
	char skew[32];
	base[0]=1;
	for(i=1;i<31;i++)	base[i]=base[i-1]*2+1;
	while(1){
		scanf("%s",skew);
		if(strcmp(skew,"0")==0)	break;  //�ж������Ƿ�Ϊ0
		sum=0;
		int k=strlen(skew);     
		for(i=0;i<strlen(skew);i++)
		{
			k--;
			sum=sum+(skew[i]-'0')*base[k];	//base����Ҫ�Ӹ�λ��ʼ��
		}
		printf("%d\n",sum);	
	}	
	getchar();
	return 0;
	
}