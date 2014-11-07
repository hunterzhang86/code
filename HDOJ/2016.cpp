#include <iostream>
#include <fstream>
using namespace std;

void swap( int &rx, int &ry)
{
    int temp;
    temp=rx;
    rx= ry;
    ry= temp;
}

int main()
{
    freopen("2016.in","r",stdin);
    int n;
    int a[101];
    while(cin>>n&&n!=0)
    {
        int i;
        cin>>a[0];
        int min=a[0];
        int flag=0;
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<min)
            {
                min=a[i];
                flag=i;
            }
        }
        if(flag!=0)
            swap(a[0],a[flag]);
        for(i=0;i<n;i++)
        {
            if(i==0)
                cout<<a[0];
            else
                cout<<" "<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
