#include <stdio.h>

int main()
{
    freopen("1041.in","r",stdin);
    int n;
    int a[1000];
    int i,j;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        for(i=0;i<n;i++)
        {
            if(i==0||a[i]!=a[i-1])
            {
                printf("%d",a[i]);
                if(a[i]!=a[n-1])
                    printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
