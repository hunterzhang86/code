#include <iostream>
#define N 8
using namespace std;

int Max(int num[],int n)
{
    int temp=0,i;
    for(i=0;i<n;i++)
    {
        if(num[i]>temp)
            temp=num[i];
    }
    return temp;
}

int LIS(int num[])
{
    int LIS[N];
    for(int i=0;i<N;i++)
    {
        LIS[i]=1;
        for(int j=0;j<i;j++)
        {
            if(num[i]>num[j]&&LIS[j]+1>LIS[i])
            {
                LIS[i]=LIS[j]+1;
            }
        }
    }
    return Max(LIS,N);
}

int main()
{
    int num[N]={1,-1,2,-3,4,-5,6,-7};
    cout<<LIS(num);
    return 0;
}
