#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2033.in","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
        int a,a1,b,b1,c,c1;
        cin>>a>>b>>c>>a1>>b1>>c1;
        int suma,sumb,sumc;
        suma=a+a1;
        sumb=b+b1;
        sumc=c+c1;
        if(sumc>=60)
        {
            sumc=sumc-60;
            sumb++;
        }
        if(sumb>=60)
        {
            sumb=sumb-60;
            suma++;
        }
        cout<<suma<<' '<<sumb<<' '<<sumc<<endl;
    }
    return 0;
}
