#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct edge
{
    int start;
    int end;
    int v=0;
}e[100001];

int flag[100001];

int main()
{
    freopen("1526.in","r",stdin);
    int n,m;
    while(cin>>n&&n!=0)
    {
        cin>>m;
        memset(flag,0,sizeof(flag));
        int i,j;
        for(i=1;i<=m;i++)
            cin>>e[i].start>>e[i].end;
        int count=0;
        for(i=1;i<=n;i++)
        {
            flag[i]=1;
            for(j=1;j<=m;j++)
            {
                if(e[i].start==i&&!e[i].v)
                {
                    flag[e[i].end]=1;
                    e[i].v=1;
                }

                if(e[i].end==i&&!e[i].v)
                {
                    flag[e[i].start]=1;
                    e[i].v=1;
                }
            }
        }
    }
    return 0;
}
