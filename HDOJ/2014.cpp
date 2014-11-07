#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2014.in","r",stdin);
    int n;
    int a[101];
    int max,min,sum;
    while(cin>>n)
    {
        int i;
        cin>>a[0];
        sum=max=min=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(max<a[i])
                max=a[i];
            if(min>a[i])
                min=a[i];
            sum+=a[i];
        }
        float avg=(sum-max-min)/((float)n-2.0);
        printf("%.2f\n",avg);
    }
    return 0;
}
