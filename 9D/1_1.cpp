#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int dp[15][15],a[15][15];

int main()
{
    freopen("1.in","r",stdin);
    while(scanf("%d",&a[1][1]) != EOF) {
        memset(dp,0,sizeof(dp));
        for(int i = 1; i <= 8; i ++)
            for(int j = 1; j <= 8; j ++)
                if(i == 1 && j == 1) continue;
                else scanf("%d",&a[i][j]);
        for(int i = 1; i <= 8; i ++)
            for(int j = 1; j <= 8; j ++)
                if(i == 1 && j == 1) dp[i][j] = a[i][j];
                else if(i == 1) dp[i][j] = dp[i][j - 1] + a[i][j];
                else if(j == 1) dp[i][j] = dp[i - 1][j] + a[i][j];
                else dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]) + a[i][j];
        printf("%d\n",dp[8][8]);
    }
    return 0;
}
