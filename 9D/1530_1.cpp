#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char s[100010];
int visit[26];

int main()
{
    freopen("1530.in","r",stdin);
    while(scanf("%s",s) != EOF) {
        int n = strlen(s);
        int ans = 0;
        for(int i = 0; i < n; i ++) {
            memset(visit,0,sizeof(visit));
            for(int j = 0; i + j < n; j ++) {
                if(visit[s[i + j] - 'a']) break;
                visit[s[i + j] - 'a'] = 1;
                ans = max(ans,j + 1);
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
