#include <stdio.h>

int main()
{
    freopen("1048.in","r",stdin);
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a+b>c&&a+c>b&&b+c>a)
        {
            if(a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a)
                printf("钝角三角形\n");
            else if(a*a+b*b>c*c&&a*a+c*c>b*b&&b*b+c*c>a*a)
                printf("锐角三角形\n");
            else
                printf("直角三角形\n");
        }
        else
            continue;
    }
    return 0;
}
