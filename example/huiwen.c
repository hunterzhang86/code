/*�жϻ�����*/
#include <stdio.h>
#include <string.h>

int huiwen(char str[])	//�ж��Ƿ�Ϊ������
{ 
	int i,j,len,flag=1;
	len=strlen(str);
	for (i=0,j=len-1;i<=j&&str[i++]==str[j--];);
	if(i>j)	
		return 1;
    else
		return 0;
}

int huiwenInt(int num)	//�ж�һ��0��1000�������Ƿ�Ϊ������
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

void IntToString (int n,char str[])	//��һ������ת�����ַ�����
{
	int i=0;
	while(n>0)
	{
		str[i]=n%10+'0';
		n=n/10;
		i++;
	}
	str[i]='\0';	//'\0'��Ϊ����Ľ�����־
}

int main()
{ 
	char str[50];
	int i;
	for(i=0;i<1000;i++)
	{	
//		if (huiwenInt(i))	//���õ�һ��huiwenInt()���ж�
//			printf("%d is a palindroma\n",i);

		IntToString (i,str);	//�Ƚ�һ������ת�����ַ������������ж�
		if (huiwen(str))
			printf("%d is a palindroma\n",i);
	}

	printf("Enter string:");	//����һ�������ж����Ƿ�Ϊ������
	while(gets(str))
	{
		if (huiwen(str))
			printf("%s is a palindroma\n",str);
		else
			printf("%s is not palindroma\n",str);
	}
}
