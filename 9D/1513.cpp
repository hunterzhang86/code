#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("1513.in","r",stdin);
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int num;
        scanf("%d",&num);
        int count=0;
        while(num)
        {
            num=num&(num-1);
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}


