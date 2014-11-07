#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("1510.in","r",stdin);
    char str[10000];
    gets(str);
    int count=0;
    for(int i=0;i<strlen(str);i++)
        if(str[i]==' ')
            count++;
    int len=strlen(str)+count*2;
    str[len--]='\0';
    for(int i=strlen(str)-1;i>=0;i--)
        if(str[i]==' ')
        {
            str[len--]='0';
            str[len--]='2';
            str[len--]='%';
        }
        else
            str[len--]=str[i];
    puts(str);
    return 0;
}
