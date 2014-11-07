#include <iostream>
#include <fstream>
#include <cstring>
#define N 100
using namespace std;

void ParseString(char* a)
{
    int len;
    len=strlen(a);
    int i,j;
    for(i=0;i<len;i++)
        for(j=0;j<len-i-1;j++)
        {
            if((a[j]>=65&&a[j]<=90)||(a[j]>=97&&a[j]<=122))
                continue;
            else if((a[j+1]>=65&&a[j+1]<=90)||(a[j+1]>=97&&a[j+1]<=122))
            {
                char tmp;
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
            else if((a[j]>=48&&a[j]<=57))
                continue;
            else if((a[j+1]>=48&&a[j+1]<=57))
            {
                char tmp;
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
            else
                continue;
        }
}

int main()
{
    freopen("zifuchuan.in","r",stdin);
    char ch[N];
    gets(ch);
    ParseString(ch);
    puts(ch);
    return 0;
}
