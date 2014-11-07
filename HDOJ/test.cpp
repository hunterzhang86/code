#include<stdio.h>
#include<string.h>
int main ()
{
    freopen("1042.in","r",stdin);
    int t,max,n,c,i,j,a[90001];
    while (scanf ("%d",&n)==1)
    {
        memset(a,0,sizeof(a));
        a[0]=1;max=1;
        for (i=1;i<=n;i++)
        {
            c=0;
            for (j=0;j<max;j++)
            {
                a[j]=a[j]*i+c;
                c=a[j]/10;
                a[j]%=10;
                if(c&&max<=j+1)
                    max++;
            }
        }
        if (a[max])
            printf ("%d",a[max]);
        for (j=max-1;j>=0;j--)
            printf ("%d",a[j]);
        printf ("\n");
    }
    return 0;
}
