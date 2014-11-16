#include <iostream>
#include <fstream>
using namespace std;

void replaceBlank(char str[])
{
	if(str==NULL)
		return;
	int originLength = 0;
	int newLength = 0;
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			newLength= newLength+2;
		originLength++;
		newLength++;
	}
	//注意i和j的初始值，需要把'/0'也考虑进去
	for(i=originLength,j=newLength;i>=0&&i<j;)
	{
		if(str[i]==' ')
		{
			str[j--]='0';
			str[j--]='2';
			str[j--]='%';
			i--;
		}
		else
		{
			str[j--]=str[i--];
		}
	}
}

int main()
{
	freopen("1510.in","r",stdin);
	char str[1000000];
	gets(str);
	replaceBlank(str);
	puts(str);
	return 0;
}