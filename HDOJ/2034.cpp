#include <iostream>
#include <fstream>
using namespace std;

int a[101],b[101];

void swap(int &a,int &b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}

int main()
{
    freopen("2034.in","r",stdin);
    int n1,n2;
    int x=3,y=4;
    while(cin>>n1>>n2)
    {
        if(n1==0&&n2==0)
            return 0;
        int i,j;
        for(i=0;i<n1;i++)
            cin>>a[i];
        for(i=0;i<n2;i++)
            cin>>b[i];
        for(i=0;i<n1;i++)
            for(j=0;j<n1-i-1;j++)
            {
                if(a[j]>a[j+1])
                    swap(a[j],a[j+1]);
            }
        int flag=1;
        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
                if(a[i]==b[j])
                {
                    j=-1;
                    break;
                }
            }
            if(j!=-1)
            {
                cout<<a[i]<<' ';
                flag=0;
            }
        }
        if(flag)
            cout<<"NULL";
        cout<<endl;
    }
    return 0;
}
