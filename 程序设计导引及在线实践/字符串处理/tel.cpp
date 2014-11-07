/*电话号码转换*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char map[]="22233344455566677778889999";    //用于将字母转换成数字
char str[80],telNumber[100000][9];

int compare(const void *elem1,const void *elem2)
{
	return(strcmp((char*)elem1,(char*)elem2));	
}

void standardizeTel(int n){
	int j,k;
	j=k=-1;
	while(k<8){
		j++;
		if(str[j]=='-')	continue;	 //如果是“-”就略去
		k++;
		if(k==3){
			telNumber[n][k]='-';	//在第三个数字后面自动加“-”
			k++;
		}
		if(str[j]>='A'&&str[j]<='Z'){	//进行字母的转换
			telNumber[n][k]=map[str[j]-'A'];
			continue;
		};
		telNumber[n][k]=str[j];
	}	
	telNumber[n][k]='\0';	//最后添加'\0'
	return;
}

int main()
{
	int i,j,n;
	bool noduplicate;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str);
		standardizeTel(i);
	}
	qsort(telNumber,n,9,compare);	//对号码进行排序
	noduplicate=true;
	i=0;
	while(i<n){
		j=i;
		i++;
		while(i<n&&strcmp(telNumber[i],telNumber[j])==0) i++;
		if(i-j>1){
			printf("%s %d\n",telNumber[j],i-j);		//i-j刚好是重复号码个数
			noduplicate=false;
		}	
	}
	if(noduplicate)	printf("No noduplicates.\n");
	getchar();
	return 0;

}