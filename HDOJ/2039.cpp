#include <iostream>
#include <fstream>
using namespace std;

int judge(float a,float b,float c)
{
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
        return 1;
    else
        return 0;
}

void swap(float &a,float &b)
{
    float tmp;
    tmp=a;
    a=b;
    b=tmp;
}

int judge1(float a,float b,float c)
{
    if(a>b)
        swap(a,b);
    if(b>c)
        swap(b,c);
    if(a>b)
        swap(a,b);
    if((a+b)>c)
        return 1;
    else
        return 0;
}

int main()
{
    freopen("2039.in","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
        float a,b,c;
        cin>>a>>b>>c;
        int flag;
        flag=judge1(a,b,c);
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
