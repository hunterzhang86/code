#include <iostream>
#include <fstream>
using namespace std;

int gcd(int m,int n)    //求最大公约数
{
    if(n>m)
    {
        int tmp;
        tmp=m;
        m=n;
        n=tmp;
    }
    if(n==0)
        return m;
    else
        return gcd(n,m%n);
}

int main()
{
    freopen("2028.in","r",stdin);
    int n;
    __int32 a[1000];        //32位的int
    while(cin>>n)
    {
        int i;
        for(i=0;i<n;i++)
            cin>>a[i];
        __int32 max_gbs=a[0];
        for(i=1;i<n;i++)    //两者的最小公倍数=两者相乘/两者的最大公约数
        {
            max_gbs=max_gbs/gcd(max_gbs,a[i])*a[i]; //先乘就可能越界了
        }
        cout<<max_gbs<<endl;
    }
    return 0;
}
