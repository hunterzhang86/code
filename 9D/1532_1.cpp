#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

bool dp[10][10][1010];
int a[10][10];

int main()
{
    freopen("1532.in","r",stdin);
    int n;
    while(scanf("%d",&n) != EOF) {
        for(int i = 1; i <= 8; i ++)
            for(int j = 1; j <= 8; j ++)
                scanf("%d",&a[i][j]);
        memset(dp,false,sizeof(dp));
        if(a[1][1] > n) {
            printf("-1\n");
            continue;
        }
        dp[1][1][a[1][1]] = true;
        for(int i = 1; i <= 8; i ++)
            for(int j = 1; j <= 8; j ++)
                for(int k = 0; k <= n; k ++)
                    if(dp[i][j][k]) {
                        if(j < 8 && k + a[i][j + 1] <= n)
                            dp[i][j + 1][k + a[i][j + 1]] = true;
                        if(i < 8 && k + a[i + 1][j] <= n)
                            dp[i + 1][j][k + a[i + 1][j]] = true;
                    }
        int ans = -1;
        for(int i = n; i >= 0; i --)
            if(dp[8][8][i]) {
                ans = i;
                break;
            }
        printf("%d\n",ans);
    }
    return 0;
}
