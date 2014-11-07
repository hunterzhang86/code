#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("1097.in","r",stdin);
    int a,b;
    while(cin>>a>>b)
    {
        int i;
        int last=1;
        a=a%10;
        for(i=0;i<b%4+4;i++)
        {
            last=(last*a)%10;
        }
        cout<<last<<endl;
    }
    return 0;
}
