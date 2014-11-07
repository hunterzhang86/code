#include <iostream>
#include <fstream>
using namespace std;

char ch[100],len;

void toR(int num,int r)
{
    len=0;
    int i=0;
    if(num<0)
        num=-num;
    while(num!=0)
    {
        if(num%r<10)
            ch[i++]=num%r+48;
        else
            ch[i++]=num%r+55;
        num=num/r;
        len++;
    }
}

int main()
{
    freopen("2031.in","r",stdin);
    freopen("2031.out","w",stdout);
    int num,r;
    while(cin>>num>>r)
    {
        toR(num,r);
        int i=len;
        if(num<0)
            cout<<'-';
        while(i>0)
            printf("%c",ch[--i]);
        cout<<endl;
    }
    return 0;
}

