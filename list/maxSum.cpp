#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int maxSum(int a[],int n)
{
    int curSum=0;
    int maxSum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]+maxSum<0)
            curSum=0;
        else
        {
            curSum+=a[i];
            maxSum=max(maxSum,curSum);
        }
    }
    return maxSum;
}

int MaxProduct(int a[],int n)
{
    int maxProduct=1;
    int minProduct=1;
    int result=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            int maxProduct=1;
            int minProduct=1;
        }
        else if(a[i]>0)
        {
            maxProduct*=a[i];
            minProduct=min(minProduct*a[i],1);
        }
        else
        {
            int tmp=maxProduct;
            maxProduct=max(minProduct*a[i],1);
            minProduct=tmp*a[i];
        }

        result=max(result,maxProduct);
    }
    return result;
}

int main()
{
    int a[]={-1,5,6,-3,7,8};
    cout<<maxSum(a,6);
    cout<<endl;
    cout<<MaxProduct(a,6)<<endl;
    return 0;
}
