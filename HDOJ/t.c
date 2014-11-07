#include<stdio.h>
int main()
{

    freopen("2013.in","r",stdin);
    int n,sum,i;
    while(scanf("%d", &n)!=EOF)
    {
        for(i=n, sum=1 ;i>1;i--)
        {
            sum=(sum+1)*2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
