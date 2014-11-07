#include <stdio.h>

#define N 100

char str[2*N];

void MyStrcat(char dstStr[],char srcStr[])
{
    memset(str,'\0',sizeof(char)*2*N);
    char *p,*q,*r;
    p=dstStr;
    q=srcStr;
    r=str;
    while(*p!='\0')
        *(r++)=*(p++);
    while(*q!='\0')
        *(r++)=*(q++);
    *r='\0';
}

int main()
{
    freopen("1490.in","r",stdin);
    char str1[N],str2[N];
    while(scanf("%s%s",str1,str2)!=EOF)
    {
        MyStrcat(str1,str2);
        printf("%s\n",str);
    }
    return 0;
}
