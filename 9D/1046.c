#include <stdio.h>
#include <limits.h>

int main()
{
    freopen("1046.in","r",stdin);
    int a[10],i,max;
    while(scanf("%d",&a[0])!=EOF)
    {
        max=a[0];
        for(i=1;i<10;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
                max=a[i];
        }
        printf("max=%d\n",max);
    }
    return 0;
}
