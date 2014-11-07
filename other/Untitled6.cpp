#include <stdio.h>
#include <string.h>
#define N 1001
#define max(a, b) (a) > (b) ? (a) : (b)
int G[N][N],x[N],y[N],d[N],tmp;

int dp(int i)
{
    int& ans=d[i];
    int j;
    if(ans>0)   return ans;
    ans=1;
    for(j=1;j<=tmp;j++)
        if(G[i][j])
            ans=max(ans,dp(j)+1);
    return ans;
}

int main()
{
    freopen("16.in","r",stdin);
    int n;
    int i,j;
    scanf("%d",&n);
    while(n--)
    {
        int t;
        scanf("%d",&t);
        tmp=t;
        for(i=1;i<=t;i++)
            scanf("%d%d",&x[i],&y[i]);
        memset(G,0,sizeof(G));
        for(i=1;i<=t;i++)
            for(j=1;j<=t;j++)
                if((x[i]>x[j]&&y[i]>y[j])||(x[i]>y[j]&&y[i]>x[j]))
                    G[i][j]=1;
        int max_ans=-1;
        memset(d,0,sizeof(d));
        for(i=1;i<=t;i++)
        {
            if(max_ans<dp(i))
                max_ans=dp(i);
        }
        printf("%d\n",max_ans);
    }
    return 0;
}
