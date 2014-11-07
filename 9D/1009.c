#include <stdio.h>
#define N 21

void judge(char str1[],char str2[])
{
    printf("hello");
}

int main()
{
    freopen("1009.in","r",stdin);
    int n;
    char str_1[N],str_2[N],tmp;
    while(scanf("%d",&n)!=EOF&&n!=0&&n>=1&&n<=20)
    {
        scanf("%c",&tmp);
        gets(str_1);
        puts(str_1);
        while(n--)
        {
            gets(str_2);
            judge(str_1,str_2);
        }
    }
}
