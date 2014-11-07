#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("1384.in","r",stdin);
    int m,n;
    int a[100][100];
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int t;
        scanf("%d",&t);
        int ok=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]==t)
                    ok=1;
            }
        if(ok==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
}
