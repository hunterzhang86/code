#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2156.in","r",stdin);
    int n;
    while(cin>>n&&n!=0)
    {
        int i,j;
        float sum;
        if(n==1)
        {
            printf("1.00\n");
            continue;
        }
        sum=n*(1.00/1.00);
        for(i=n-1,j=2;i>0,j<=n;i--,j++)
        {
            sum=sum+i*2*(1.00/j);
        }
        printf("%.2f\n",sum);
    }
    return 0;
}
