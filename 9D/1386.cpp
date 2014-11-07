#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("1386.in","r",stdin);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[100];
        int min=1000000;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<min)
                min=a[i];
        }
        printf("%d\n",min);
    }
    return 0;
}
