#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("1516.in","r",stdin);
    int n;
    int a[100000];
    int b[100000];
    scanf("%d",&n);
    int i,j;
    for(i=1,j=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
            b[j++]=a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==0)
            b[j++]=a[i];
    }
    for(i=1;i<n;i++)
        printf("%d ",b[i]);
    printf("%d\n",b[n]);
    return 0;
}
