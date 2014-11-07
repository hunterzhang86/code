#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void FixedSum(int a[],int b[],int m,int n,int des)
{
    for(int i=0,j=n-1;i<n&&j>=0;)
    {
        if(a[i]+b[j]<des)
            i++;
        else if(a[i]+b[j]==des)
        {
            cout<<a[i]<<','<<b[j]<<endl;
            i++;
            j--;
        }
        else
            j--;
    }
}

int compare(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}

int main()
{
    int a[5]={1,4,5,3,9};
    int b[6]={6,5,7,8,3,2};
    qsort(a,5,sizeof(int),compare);
    qsort(b,6,sizeof(int),compare);
    FixedSum(a,b,5,6,8);
    return 0;
}
