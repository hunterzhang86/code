#include <stdio.h>
#include <limits.h>
#define N 9999

int max_sum=INT_MIN,start=0,end=0;

/*
void MaxSum(int num[],int n)
{

    int i,j,k,sum=0;
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                sum=sum+num[k];
            }
            if(sum>max_sum)
            {

                max_sum=sum;
                start=num[i];
                end=num[j];
            }
            sum=0;
        }
        if(max_sum<0)
        {
            max_sum=0;
            start=num[0];
            end=num[n-1];
        }
        return;
}
*/

void MaxSum(int num[],int n)
{

    int i,j,k,sum=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+num[j];
            if(sum>max_sum)
            {

                max_sum=sum;
                start=num[i];
                end=num[j];
            }
            //sum=0;
        }
    }
    if(max_sum<0)
    {
        max_sum=0;
        start=num[0];
        end=num[n-1];
    }
    return;
}



int main()
{
    freopen("1011.in","r",stdin);
    int k,num[N],i;
    while(1)
    {
        scanf("%d",&k);
        if(k!=0)
        {
            for(i=0;i<k;i++)
            {
                scanf("%d",&num[i]);
            }
            MaxSum(num,k);
            printf("%d %d %d\n",max_sum,start,end);
            max_sum=INT_MIN;
            start=0;
            end=0;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
