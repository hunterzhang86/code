/*判断回文数*/
#include <stdio.h>
#include <string.h>

int huiwen(char str[])	//判断是否为回文数
{ 
	int i,j,len,flag=1;
	len=strlen(str);
	for (i=0,j=len-1;i<=j&&str[i++]==str[j--];);
	if(i>j)	
		return 1;
    else
		return 0;
}

int huiwenInt(int num)	//判断一个0到1000的整数是否为回文数
{
	if(num>=0&&num<10)
	{
		return 1;
	}
	else if(num>=10&&num<100)
	{
		if(num/10==num%10)	return 1;
		else return 0;
	}
	else if(num>=100&&num<1000)
	{
		if(num/100==num%10)	return 1;
		else return 0;
	}
}

void IntToString (int n,char str[])	//将一个整数转化成字符数组
{
	int i=0;
	while(n>0)
	{
		str[i]=n%10+'0';
		n=n/10;
		i++;
	}
	str[i]='\0';	//'\0'作为数组的结束标志
}

int main()
{ 
	char str[50];
	int i;
	for(i=0;i<1000;i++)
	{	
//		if (huiwenInt(i))	//利用第一个huiwenInt()做判断
//			printf("%d is a palindroma\n",i);

		IntToString (i,str);	//先将一个整数转化成字符串数组再做判断
		if (huiwen(str))
			printf("%d is a palindroma\n",i);
	}

	printf("Enter string:");	//输入一个整数判断它是否为回文数
	while(gets(str))
	{
		if (huiwen(str))
			printf("%s is a palindroma\n",str);
		else
			printf("%s is not palindroma\n",str);
	}
}
