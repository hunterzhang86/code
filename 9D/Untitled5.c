#include <stdio.h>
#define N 13

int main()
{
    freopen("1482.in","r",stdin);
    char num[N];
    int i,n,count=0,tmp,max;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%c",&tmp);
gets(num);
        i=0;
        while(i<=n)
        {
            if(num[i]=='2')
                break;
            else
            {
                ++count;
                ++i;
            //    printf("%d\n",i);
            }
        }

        max=count;
        if((i-1)>=0&&num[i-1]=='0')
        {
            --count;
        }
        else
        {
            while(num[i]!='0'&&i<=n)
            {
                ++count;
                ++i;
            }
        }
        if(count>max)
            max=count;
        if((i-1)>=0&&num[i-1]=='1')
        {
            --count;
        }
        else
        {
            while(num[i]!='1'&&i<=n)
            {
                ++count;
                ++i;
            }
        }
        if(count>max)
            max=count;
        if((i-1)>=0&&num[i-1]=='2')
        {
            --count;
        }
        else
        {
            while(num[i]!='2'&&i<=n)
            {
                ++count;
                ++i;
            }
        }
        if(count>max)
            max=count;
        if(i>n||i<0)
        {
            printf("-1\n");
            continue;
        }
        else
            printf("%d\n",count+1);
    }
}
