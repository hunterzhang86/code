#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2006.in","r",stdin);
    int n;
    int tmp;
    int mul;    //��double�������ˡ���
    while(cin>>n)
    {
        mul=1;
        while(n--)
        {
            cin>>tmp;
            if(tmp%2!=0)
                mul=mul*tmp;
        }
        cout<<mul<<endl;
    }
    return 0;
}

