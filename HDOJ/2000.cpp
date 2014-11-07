#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("2000.in","r",stdin);
    char ch[3];
    char tmp;
    while(scanf("%c%c%c",&ch[0],&ch[1],&ch[2])!=EOF)
    {
        scanf("%c",&tmp);
        int i,j;
        for(i=0;i<3;i++)
            for(j=0;j<3-i-1;j++)
            {
                if(ch[j]>ch[j+1])
                {
                    tmp=ch[j];
                    ch[j]=ch[j+1];
                    ch[j+1]=tmp;
                }
            }
        printf("%c %c %c\n",ch[0],ch[1],ch[2]);
    }
    return 0;
}
