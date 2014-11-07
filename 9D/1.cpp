#include <iostream>
#include <fstream>
#include <algorithm>

#define M 8
#define N 8

using namespace std;

int evaluteMax(int a[M][N])
{
    int m=0;
    int dp[M][N];
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
        {
            if(i==0&&j==0)
                dp[i][j]=a[i][j];
            else if(i==0)
                dp[i][j]=dp[i][j-1]+a[i][j];
            else if(j==0)
                dp[i][j]=dp[i-1][j]+a[i][j];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])+a[i][j];
        }
    return dp[M-1][N-1];
}

int main()
{
    freopen("1.in","r",stdin);
    int a[M][N];
    while(scanf("%d",&a[0][0])!=EOF)
    {
        int i,j;
        for(i=0;i<M;i++)
            for(j=0;j<N;j++)
            {
                if(i==0&&j==0)
                    continue;
                else
                    scanf("%d",&a[i][j]);
            }
        int max=evaluteMax(a);
        cout<<max<<endl;
    }
    return 0;
}
