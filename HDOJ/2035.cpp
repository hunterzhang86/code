#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2035.in","r",stdin);
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            return 0;
        int i;
        int last=1;
        for(i=0;i<b;i++)      //a^b�����һλ��(a%10)^(b%4+4)�����һλһ��
        {
            last=last*a%1000;
        }
        cout<<last<<endl;
    }
    return 0;
}
