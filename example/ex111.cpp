/*
	输入一个字符串，把字符串中的字母顺序排序，字符串中的数字逆序排序。
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
	subSort(a,0,length-2);	//这样数字自然就被放到了字符串的后面
	addSort(a,0,zimulen-2);	//对字母进行排序
	for(i=0;i<length;i++)
	{
		str[i]=a[i];
		cout<<str[i];
	}
	cout<<endl;
	return 0;
}
