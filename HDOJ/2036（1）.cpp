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
		x[n]=x[0];
		y[n]=y[0];
		float sum=0;
		for(i=1;i<=n;i++)
            sum+=x[i-1]*y[i]-x[i]*y[i-1];
        printf("%1.1f\n",sum/2);
    }
    return 0;
}
