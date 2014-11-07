#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("1516.in","r",stdin);
    int n;
    int a[100000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int low=1;
    int high=n;
    a[0]=a[1];
    while(low<high)
    {
        while(a[high]%2==0)
            high--;
        a[low++]=a[high];
        while(a[low]%2!=0)
            low++;
        a[high--]=a[low];
    }
    a[low]=a[0];
    for(int i=1;i<n;i++)
        printf("%d ",a[i]);
    printf("%d\n",a[n]);
    return 0;
}

