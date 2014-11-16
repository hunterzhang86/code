#include <stdio.h>
#define N 100

int main()
{
    int num[N],i=0,sum=N-1,count=0;
    for(i=0;i<N;i++)
        num[i]=1;
    i=0;
    while(sum)
    {
        if(num[i]==1)
        {
            count++;
            if(count==3)
            {
                num[i]=0;
                count=0;
                sum--;
            }
        }
        if(i<=N-1)
            i++;
        if(i==N)
            i=0;
    }
    sum=N;
    while(sum--)
    {
        if(num[sum]==1)
        {
            printf("%d\n",sum);
            return 0;
        }
    }
    return 0;
}

