#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("1389.in","r",stdin);
    int n;
    long long a[51];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    a[3]=4;
    a[4]=8;
    for(int i=5;i<=50;i++)
        a[i]=pow(2,i-1);
    while(cin>>n)
        cout<<a[n]<<endl;
    return 0;
}

