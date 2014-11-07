#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("2036.in","r",stdin);           //这样凹边形就不可以了
    int n;
    int x[101],y[101];
    while(cin>>n&&n!=0)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        float area=0;
        float a,b,c;
        for(i=2;i<n;i++)
        {
            a=sqrt((float)((x[i]-x[i-1])*(x[i]-x[i-1])+(y[i]-y[i-1])*(y[i]-y[i-1])));
            b=sqrt((float)((x[i]-x[0])*(x[i]-x[0])+(y[i]-y[0])*(y[i]-y[0])));
            c=sqrt((float)((x[i-1]-x[0])*(x[i-1]-x[0])+(y[i-1]-y[0])*(y[i-1]-y[0])));
            float p=(a+b+c)/2.0;
            area=area+sqrt((float)(p*(p-a)*(p-b)*(p-c)));
        }
        printf("%.1f\n",area);
    }
    return 0;
}
