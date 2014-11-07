#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("1511.in","r",stdin);
    int num[1000];
    int count=0;
    int tmp;
    while(scanf("%d",&tmp))
    {
        if(tmp==-1)
            break;
        else
            num[count++]=tmp;
    }
    for(int i=count-1;i>=0;i--)
        printf("%d\n",num[i]);
    return 0;
}
