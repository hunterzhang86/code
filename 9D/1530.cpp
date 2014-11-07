#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;

int  main()
{
    freopen("1530.in","r",stdin);
    char str[10010];
    while(scanf("%s",str)!=EOF)
    {
        bool visit[26];
        int ans=0;
        for(int i=0;i<strlen(str);i++)
        {
            memset(visit,false,sizeof(visit));
            for(int j=0;i+j<strlen(str);j++)
            {
                if(visit[str[i+j]-'a'])
                    break;
                visit[str[i+j]-'a']=true;
                ans=max(ans,j+1);
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
