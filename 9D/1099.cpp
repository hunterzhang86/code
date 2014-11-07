#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;

char n[1000][1000];
char m[1000];

int cmp(const void *a, const void *b)
{
    return *(char *)a- *(char *)b;
}

bool comp(char *str1, char *str2)
{
    if(strcmp(str1, str2) < 0) return true;
    else return false;
}

int main()
{
    freopen("1099.in","r",stdin);
    while(scanf("%s",m)!=EOF)
    {
        for(int i=0;i<strlen(m);i++)
            strcpy(n[i],m+i);
        qsort(n,strlen(m),sizeof(m),cmp);
    //    sort(n,n+strlen(m),comp);
        for(int i=0;i<strlen(m);i++)
            printf("%s\n",n[i]);
    }
    return 0;
}
