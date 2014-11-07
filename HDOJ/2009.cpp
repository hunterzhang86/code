#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("2009.in","r",stdin);
    double n,m;
    while(cin>>n>>m)
    {
        double sum=0.0;
        int i;
        for(i=0;i<m;i++)
        {

            sum=sum+n;
            n=sqrt(n);
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}

