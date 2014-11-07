#include <iostream>
#include <fstream>
#define PI 3.1415927
using namespace std;

int main()
{
    freopen("2003.in","r",stdin);
    double n;
    while(cin>>n)
    {
        if(n>=0)
            printf("%.2lf\n",n);
        else
            printf("%.2lf\n",-n);

    }
    return 0;
}

