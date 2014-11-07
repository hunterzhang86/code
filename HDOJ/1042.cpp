#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("1042.in","r",stdin);
    int n;
    int num[90001];
    while(cin>>n)
    {
        memset(num,0,sizeof(num));
        num[0]=1;
        int max=1;
        int c;
        int i,j;
        for(i=1;i<=n;i++)
        {
            c=0;
            for(j=0;j<max;j++)
            {
                num[j]=num[j]*i+c;
                c=num[j]/10;
                num[j]=num[j]%10;
                if(c&&max<=j+1)
                    max++;
            }
        }
        if(num[max])
            cout<<num[max];
        for(i=max-1;i>=0;i--)
            cout<<num[i];
        cout<<endl;
    }
    return 0;
}
