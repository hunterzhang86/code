#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("2012.in","r",stdin);
    int x,y;
    while(cin>>x>>y)
    {
        if(x==0&&y==0)
            break;
        if(x>y)
        {
            int tmp1;
            tmp1=x;
            x=y;
            y=tmp1;
        }
        int num;
        int i,j;
        int flag=1;
        for(i=x;i<=y;i++)
        {
            num=i*i+i+41;
            int tmp2=sqrt((double)num)+1;   //这里num必须转换到double才能AC
            for(j=2;j<tmp2;j++)
            {
                if(num%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(flag)
            cout<<"OK"<<endl;
        else
            cout<<"Sorry"<<endl;
    }
    return 0;
}

