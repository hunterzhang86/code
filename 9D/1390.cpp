#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("1390.in","r",stdin);
    int n;
    long long a[71];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    a[3]=3;
    a[4]=5;
    for(int i=5;i<=70;i++)
        a[i]=a[i-1]+a[i-2];
    while(cin>>n)
        cout<<a[n]<<endl;
    return 0;
}


