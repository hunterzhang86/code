#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    freopen("1531.in","r",stdin);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[100];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>ans+1)
                break;
            else
                ans+=a[i];
        }
        printf("%d\n",ans+1);
    }
    return 0;
}
