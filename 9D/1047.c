#include <stdio.h>
#include <math.h>

int main()
{
    freopen("1047.in","r",stdin);
    int num,i,flag,tmp;
    while(scanf("%d",&num)!=EOF)
    {
        flag=1;
        if(num<2)   //0,1,负数都是非素数
        {
            printf("no\n");
            continue;
        }
        tmp=sqrt(num);
        for(i=2;i<=tmp;i++)
            if(num%i==0)
            {
                flag=0;
                break;
            }
        if(flag==0)
            printf("no\n");
        else if(flag==1)
            printf("yes\n");
        else
            return 0;
    }
    return 0;
}
