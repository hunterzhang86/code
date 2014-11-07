#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2019.in","r",stdin);
    int n,m;
    int a[101];
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            return 0;
        int i;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>m)
                a[i+1]=a[i];
            if(a[i]<=m)
            {
                a[i+1]=m;
                break;
            }
        }
        for(i=0;i<=n;i++)
        {
            if(i==0)
                cout<<a[i];
            else
                cout<<' '<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
