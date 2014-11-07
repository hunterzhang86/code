#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    freopen("2008.in","r",stdin);
    int n;
    int a,b,c;
    while(cin>>n&&n!=0)
    {
        a=b=c=0;
        while(n--)
        {
            float tmp;
            cin>>tmp;
            if(tmp<0)
                a++;
            else if(tmp>0)
                c++;
            else
                b++;
        }
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
    return 0;
}

