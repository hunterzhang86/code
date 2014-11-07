#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2011.in","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        double sum=0.00;
        int i;
        for(i=1;i<=num;i++)
        {
            if(i%2!=0)
            {
                sum=sum+1.00/i;
            }
            else
            {
                sum=sum-1.00/i;
            }
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}

