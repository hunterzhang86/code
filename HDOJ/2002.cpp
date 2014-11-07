#include <iostream>
#include <fstream>
#define PI 3.1415927
using namespace std;

int main()
{
    freopen("2002.in","r",stdin);
    double r,v;
    while(cin>>r)
    {
        v=(4.0/3.0)*PI*r*r*r;
        printf("%.3lf\n",v);
    }
    return 0;
}
