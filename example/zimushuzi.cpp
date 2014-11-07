#include <iostream>
#include <string>
#define N 1000
using namespace std;

void addSort(char a[],int start,int end)
{
	for(int i=start;i<end;i++)
		for(int j=start;j<end-i;j++)
			if(a[j]>a[j+1])
			{
				char tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
}
void subSort(char a[],int start,int end)
{
		for(int i=start;i<end;i++)
			for(int j=start;j<end-i;j++)
				if(a[j]<a[j+1])
				{
					char tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
}

int main()
{
	char str[N],a[N ];
	int i,j=0,k,length;
	
	gets(str);
//	puts(str);
//	cout<<strlen(str)<<endl;
	length=strlen(str);
	k=length-1;
	for(i=0;i<strlen(str);i++)
	{
	//	cout<<str[i]<<endl;
		if((str[i]>='A'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9'))
			a[j++]=str[i];
		else
			length--;
	}
	a[length+1]='\0';
//	cout<<j<<endl;	
//	subSort(a,j,length);
	subSort(a,0,length);
	addSort(a,0,j-1);
	for(i=0;i<length;i++)
	{
		str[i]=a[i];
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}
