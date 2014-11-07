#include <stdio.h>

int main()
{
    freopen("1202.in","r",stdin);
    int n;
    int num[100];
    int i,j;
    int tmp;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
        for(i=0;i<n;i++)
            for(j=0;j<n-i-1;j++)
            {
                if(num[j]>num[j+1])
                {
                    tmp=num[j];
                    num[j]=num[j+1];
                    num[j+1]=tmp;
                }
            }
        for(i=0;i<n;i++)
            printf("%d ",num[i]);
        printf("\n");
    }
    return 0;
}
