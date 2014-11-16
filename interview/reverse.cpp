#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void swap(char &a,char &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}

void reverse1(char *str)
{
    int len=strlen(str);
    int i;
    for(i=0;i<len/2;i++)
        swap(str[i],str[len-i-1]);
}

void reverse(char *str)
{
    char *end=str;
    char tmp;
    if(str)
    {
        while(*end)
            ++end;
        --end;
        while(str<end)
        {
            tmp=*str;
            *(str++)=*end;
            *(end--)=tmp;
        }
    }
}

int main()
{
    freopen("1.2.in","r",stdin);
    char str[100];
    while(gets(str))
    {
        reverse1(str);
        puts(str);
    }
    return 0;
}
