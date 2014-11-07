#include <iostream>
#include <fstream>
using namespace std;

void select(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-2;i++)
        for(j=i+1;j<n-1;j++)
            for(k=j+1;k<n;k++)
            {
                cout<<a[i]<<a[j]<<a[k];
                cout<<endl;
            }
}

int main()
{
    int a[6];
    for(int i=0;i<6;i++)
    {
        a[i]=i+1;
        cout<<a[i]<<endl;
    }

    select(a,6);
    cout<<endl;
    return 0;
}
