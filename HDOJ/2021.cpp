#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2021.in","r",stdin);
    int n;
    int a[101];
    int money[6]={100,50,10,5,2,1};
    while(cin>>n&&n!=0)
    {
        int i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int sum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<6;j++)
            {
                sum=sum+a[i]/money[j];
                a[i]=a[i]-(a[i]/money[j])*money[j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
