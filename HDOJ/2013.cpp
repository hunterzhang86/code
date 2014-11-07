/*

//我竟然用了暴力法
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2013.in","r",stdin);
    int n;
    while(cin>>n)
    {
        int day=1;
        int i,j;
        int tmp;
        for(i=2;;i++)
        {
            tmp=i;
            for(j=1;j<n;j++)
            {
                tmp=tmp/2-1;
            }
            if(tmp==1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2013.in","r",stdin);
    int n;
    while(cin>>n)
    {
        int day=1;
        int i;
        for(i=1;i<n;i++)
        {
            day=(day+1)*2;
        }
        cout<<day<<endl;
    }
    return 0;
}

