#include <iostream>
#include <fstream>
using namespace std;

int f(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n>1)
        return f(n-1)+f(n-2);
}

int main()
{
    freopen("1387.in","r",stdin);
    int n;
    long long fib[71];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=70;i++)
        fib[i]=fib[i-1]+fib[i-2];
    while(scanf("%d",&n)!=EOF)
    {
        cout<<fib[n]<<endl;
    }
    return 0;
}

