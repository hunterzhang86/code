/*Í³¼Æ×Ö·ûÊý*/

#include <stdio.h>
#include <string.h>

int main()
{
	int i,cases,max,sum[26];
	char str[1001];	
	scanf("%d",&cases);
	while(cases--){
		scanf("%s",str);
		for(i=0;i<26;i++)	sum[i]=0;
		for(i=0;i<strlen(str);i++)
			sum[str[i]-'a']++;
		max=0;
		for(i=0;i<26;i++)
			if(sum[i]>sum[max])	max=i;
		printf("%c %d\n",'a'+max,sum[max]);
	}	
	getchar();
	return 0;
	
}
