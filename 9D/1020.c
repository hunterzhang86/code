#include <stdio.h>
#include <math.h>
#include <limits.h>
#define N 100

int main()
{
    freopen("1020.in","r",stdin);
    int x[N],y[N];
    int i=0;
    int max_x=INT_MIN,max_y=INT_MIN,min_x=INT_MAX,min_y=INT_MAX;
    while(scanf("%d",&x[i])!=EOF)
    {
        scanf("%d",&y[i]);
        if(abs(x[i])>=231||abs(y[i])>=231)
        {
            i=0;
            max_x=INT_MIN;
            max_y=INT_MIN;
            min_x=INT_MAX;
            min_y=INT_MAX;
            continue;
        }
        else if(x[0]==0&&y[0]==0)
        {
            continue;
        }
        else if(x[i]==0&&y[i]==0)
        {
            printf("%d %d %d %d\n",min_x,min_y,max_x,max_y);
            i=0;
            max_x=INT_MIN;
            max_y=INT_MIN;
            min_x=INT_MAX;
            min_y=INT_MAX;
        }
        else
        {
            if(x[i]>max_x)
                max_x=x[i];
            if(y[i]>max_y)
                max_y=y[i];
            if(x[i]<min_x)
                min_x=x[i];
            if(y[i]<min_y)
                min_y=y[i];
            i++;
        }

    }
}
