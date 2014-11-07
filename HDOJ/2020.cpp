#include <iostream>
#include <fstream>
using namespace std;

int fabs(int num)
{
    if(num>=0)
        return  num;
    else
        return -num;
}

int main()
{
    freopen("2020.in","r",stdin);
    int n;
    int a[101];
    while(cin>>n&&n!=0)
    {
        int i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            for(j=0;j<n-i-1;j++)
            {
                if(fabs(a[j])<fabs(a[j+1]))   //要转换成float才能通过，用cmath的话
                {
                    int tmp;
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        for(i=0;i<n;i++)
        {
            if(i==0)
                cout<<a[i];
            else
                cout<<' '<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
