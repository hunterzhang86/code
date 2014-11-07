#include <stdio.h>
int d[101][101];

int max_sum(int a[101][101],int n)
{
    int i,j;
    for(j=1;j<=n;j++)
        d[n][j]=a[n][j];
    for(i=n-1;i>=1;i--)
        for(j=1;j<=i;j++)
            d[i][j]=a[i][j]+(d[i+1][j]>d[i+1][j+1]?d[i+1][j]:d[i+1][j+1]);
    return d[1][1];
}

int main()
{
    freopen("1163.in","r",stdin);
    int n;
    int a[101][101];
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            scanf("%d",&a[i][j]);
    printf("%d\n",max_sum(a,n));
    return 0;
}
