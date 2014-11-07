#include <stdio.h>
#define N 100

int main()
{
    int num[N+1],i,sum=N-1,count=0,*p;
    for(i=0;i<N;i++)
        num[i]=1;
    num[N]=2;
    p=num;
    while(sum)
    {
        if(*p==1)
        {
            count++;
            if(count==3)
            {
                *p=0;
                count=0;
                sum--;
            }
        }
        if(*p==2)
            p=num;
        else
            p++;
    }

    p=num;
    i=0;
    while(i<N)
    {
        if((*p)==1)
        {
            printf("%d\n",i);
            return 0;
        }
        p++;
        i++;
    }
    return 0;
}


