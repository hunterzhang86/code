#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("2026.in","r",stdin);
    char ch[101];
    while(gets(ch))
    {
        int i;
        if(ch[0]>=97&&ch[0]<=122)
            printf("%c",ch[0]-32);
        int flag=0;
        for(i=1;i<strlen(ch);i++)
        {
            if(ch[i]==' ')
                flag=1;
            if(flag)
            {
                if(ch[i]>=97&&ch[i]<=122)
                {
                    printf("%c",ch[i]-32);
                    flag=0;
                }
                else
                    printf("%c",ch[i]);
            }
            else
                printf("%c",ch[i]);
        }
        cout<<endl;
    }
    return 0;
}
