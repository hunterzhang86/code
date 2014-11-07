#include <stdio.h>
#include <limits.h>
#define N 10000

int main()
{
    freopen("1483.in","r",stdin);
    int n,i,a[N],max,min;
    while(scanf("%d",&n)!=EOF)
    {
        max=INT_MIN,min=INT_MAX;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }
        printf("%d %d\n",max,min);
    }
    return 0;
}
