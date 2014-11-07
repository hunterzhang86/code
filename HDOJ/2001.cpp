#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("2001.in","r",stdin);
    float x[2],y[2];
    float len;
    while(cin>>x[0]>>y[0]>>x[1]>>y[1])
    {
        len=sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
        printf("%.2f\n",len);
    }
    return 0;
}
