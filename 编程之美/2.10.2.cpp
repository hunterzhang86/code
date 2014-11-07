#include <iostream>
#include <limits.h>
#define N 8

using namespace std;

int Min(int num[],int n)
{
    int i,temp=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(num[i]<temp)
            temp=num[i];
    }
    return temp;
}

int LIS(int num[])
{
    int MaxV[N+1];
    MaxV[1]=num[0];
    MaxV[0]=Min(num,N)-1;
    int LIS[N];
    for(int i=0;i<N;i++)
    {
        LIS[i]=1;
    }
    int nMaxLIS=1;
    for(int i=1;i<N;i++)
    {
        int j;
        for(j=nMaxLIS;j>=0;j--)
        {
            if(num[i]>MaxV[j])
            {
                LIS[i]=j+1;
                break;
            }
        }

        if(LIS[i]>nMaxLIS)
        {
            nMaxLIS=LIS[i];
            MaxV[LIS[i]]=num[i];
        }
        else if(MaxV[j]<num[i]&&num[i]<MaxV[j+1])
        {
            MaxV[j+1]=num[i];
        }
    }
    return nMaxLIS;
}

int main()
{
    int num[N]={1,-1,2,-3,4,-5,6,-7};
    cout<<LIS(num);
    return 0;
}
