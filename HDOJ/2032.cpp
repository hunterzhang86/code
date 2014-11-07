#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2032.in","r",stdin);
    int num;
    int i,j;
    int a[31][31];
    for(i=0;i<=30;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
        for(j=1;j<i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    while(cin>>num)
    {
        for(i=0;i<num;i++)
        {
            cout<<a[i][0];
            for(j=1;j<=i;j++)
                cout<<' '<<a[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
