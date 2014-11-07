#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("2040.in","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int suma=0,sumb=0;
        int i;
        float budge=a/2+1;
        for(i=1;i<budge;i++)
        {
            if(a%i==0)
                suma+=i;
        }
        if(suma!=b)
        {
            cout<<"NO"<<endl;
            continue;
        }
        budge=b/2+1;
        for(i=1;i<budge;i++)
        {
            if(b%i==0)
                sumb+=i;
        }
        if(sumb==a)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
