#include <iostream>
#include <fstream>
using namespace std;

int fabs(int num)
{
    if(num<0)
        return -num;
    else
        return num;
}

int main()
{
    freopen("2022.in","r",stdin);
    int m,n;
    int a[100][100];
    while(cin>>m>>n)
    {
        int i,j;
        for(i=1;i<=m;i++)
            for(j=1;j<=n;j++)
                cin>>a[i][j];
        int max=a[1][1];
        int x=1,y=1;
        for(i=1;i<=m;i++)
            for(j=1;j<=n;j++)
            {
                if(fabs(a[i][j])>fabs(max))
                {
                    max=a[i][j];
                    x=i;
                    y=j;
                }
            }
        cout<<x<<' '<<y<<' '<<max<<endl;
    }
    return 0;
}
