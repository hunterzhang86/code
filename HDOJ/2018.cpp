#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2018.in","r",stdin);
    int n;
    int a[55]={1,2,3};
    while(cin>>n&&n!=0)
    {
        if(n>3)
        {
            int i;
            for(i=3;i<n;i++)
            {
                a[i]=a[i-1]+a[i-3]; //a[i]比a[i-1]多的就是a[i-3],a[i-3]就是新出生的头数
            }
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}
