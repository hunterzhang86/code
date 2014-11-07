#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

int reverseToInt(char a[])
{
    int res=0;
    for(int i=0;i<strlen(a);i++)
        res += (a[i]-'0')*pow(10,i);
    return res;
}

int toInt(char a[])
{
    int res=0;
    for(int i=0;i<strlen(a);i++)
        res += (a[i]-'0')*pow(10,strlen(a)-i-1);
    return res;
}

int main()
{
    freopen("1089.in","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
        char a[6],b[6];
        cin>>a>>b;
        if((reverseToInt(a)+reverseToInt(b)) == (toInt(a)+toInt(b)))
            cout<<toInt(a)+toInt(b)<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
