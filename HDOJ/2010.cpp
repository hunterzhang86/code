#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2010.in","r",stdin);
    double m,n;
    while(cin>>m>>n)
    {
        if(m>n)
        {
            int tmp;
            tmp=m;
            m=n;
            n=tmp;
        }
        int i;
        int flag=1;
        for(i=m;i<=n;i++)
        {
            int a,b,c;
            a=i/100;
            b=i/10%10;
            c=i%10;
            if(i==(a*a*a+b*b*b+c*c*c))
            {
                if(flag)
                {
                    cout<<i;
                    flag=0;
                }
                else
                    cout<<' '<<i;
            }
        }
        if(flag)
            cout<<"no"<<endl;
        else
            cout<<endl;

    }
    return 0;
}

