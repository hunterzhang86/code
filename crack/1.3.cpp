#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

void removeDuplicate(char str[])
{
    int len=strlen(str);
    if(len<2)
        return;
    int p=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]!='\0')
        {
            str[p++]=str[i];
            for(int j=i+1;j<len;j++)
                if(str[i]==str[j])
                    str[j]='\0';
        }
    }
    str[p]='\0';
}

void removeDuplicate1(char str[])
{
    int len = strlen(str);
    if(len < 2) return;
    bool c[256];
    memset(c, 0, sizeof(c));
    int p = 0;
    for(int i=0; i < len; ++i)
    {
        if(!c[str[i]])
        {
            str[p++] = str[i];
            c[str[i]] = true;
        }
    }
    str[p] = '\0';
}


int main()
{
    freopen("1.3.in","r",stdin);
    char str[100];
    while(gets(str))
    {
        if(strlen(str)>1)
            removeDuplicate(str);
        puts(str);
    }
    return 0;
}
