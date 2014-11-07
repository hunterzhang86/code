#include <stdio.h>

int main()
{
    freopen("1031.in","r",stdin);
    int num;
    int count=0;
    while(scanf("%d",&num)!=EOF&&num!=0)
    {
        count=0;
        while(num!=1)
        {
            if(num%2==0)
                num/=2;
            else
                num=(num*3+1)/2;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
