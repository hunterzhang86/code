#include <iostream>
#include <fstream>
using namespace std;

void Merge(int a[],int b[],int c[],int n)
{
    int i=0,j=0,k=0;
    while(i<n&&j<n)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else
        {
            c[k++]=a[i++];
            c[k++]=b[j++];
        }

    }
    if(i==n-1)
    {
        while(j<n)
            c[k++]=b[j++];
    }
    else if(j==n-1)
    {
        while(i<n)
            c[k++]=a[i++];
    }
}

int main()
{
    int a[]={1,2,4,8};
    int b[]={1,3,4,8};
    int c[8];
    Merge(a,b,c,4);
    for(int i=0;i<8;i++)
        cout<<c[i]<<' ';
    cout<<endl;
    return 0;
}
