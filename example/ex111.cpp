/*
	����һ���ַ��������ַ����е���ĸ˳�������ַ����е�������������
*/

#include <iostream>
#include <string>
#define N 100
using namespace std;

void addSort(char a[],int start,int end)
{
	for(int i=start;i<=end;i++)
		for(int j=start;j<=end;j++)
			if(a[j]>a[j+1])
			{
				char tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
}

void subSort(char a[],int start,int end)
{
		for(int i=start;i<=end;i++)
			for(int j=start;j<=end;j++)
				if(a[j]<a[j+1])
				{
					char tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
}

int main()
{
	char str[N],a[N];
	int i,j=0,k,length,zimulen=0;
	
	gets(str);
//	puts(str);
//	cout<<strlen(str)<<endl;
	length=strlen(str);
//	k=length-1;
	for(i=0;i<strlen(str);i++)
	{
	//	cout<<str[i]<<endl;
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
		{
			a[j++]=str[i];
			zimulen++;
	//		cout<<str[i]<<endl;
		}
		else if (str[i]>='0'&&str[i]<='9')
		{
			a[j++]=str[i];
//			cout<<a[k]<<endl;
		}
		else
			length--;
	}
//	a[length+1]='\0';
//	cout<<j<<endl;	
//	subSort(a,j,length);
	cout<<zimulen<<endl;
	subSort(a,0,length-2);	//����������Ȼ�ͱ��ŵ����ַ����ĺ���
	addSort(a,0,zimulen-2);	//����ĸ��������
	for(i=0;i<length;i++)
	{
		str[i]=a[i];
		cout<<str[i];
	}
	cout<<endl;
	return 0;
}
