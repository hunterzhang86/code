#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>

#define M 8
#define N 8

using namespace std;

int evaluteMax(int a[M][N],int limits)
{
    if(a[0][0]>limits)
        return -1;
    int dp[M][N][1010];
    memset(dp,false,sizeof(dp));
    dp[0][0][a[0][0]]=true;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            for(int k=1;k<=limits;k++)
            {
                if(dp[i][j][k])
                {
                    if(i<M-1&&k+a[i+1][j]<=limits)
                        dp[i+1][j][k+a[i+1][j]]=true;
                    if(j<N-1&&k+a[i][j+1]<=limits)
                        dp[i][j+1][k+a[i][j+1]]=true;
                }
            }
        int ans = -1;
        for(int i = limits; i >= 0; i --)
            if(dp[M-1][N-1][i])
            {
                ans = i;
                break;
            }
        return ans;

}

int main()
{
    freopen("1532.in","r",stdin);
    int a[M][N];
    int limits;
    while(scanf("%d",&limits)!=EOF)
    {
        int i,j;
        for(i=0;i<M;i++)
            for(j=0;j<N;j++)
                scanf("%d",&a[i][j]);
        cout<<evaluteMax(a,limits)<<endl;
    }
    return 0;
}
