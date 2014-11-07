#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("1188.in","r",stdin);
    freopen("1188.out","w",stdout);
    int a[3010];
    int n,p;
    while(cin>>n>>p)
    {
        int i;
        for(i=1;i<=n;i++)
            a[i]=1;
        int sum=n-1,count=0;
        i=1;
        while(sum)
        {
            if(a[i]==1)
            {
                count++;
                if(count == p)
                {
                    cout<<i<<' ';
                    a[i]=0;
                    sum--;
                    count=0;
                }
            }
            if(i <= n)
                i++;
            if(i == n+1)
                i=1;
        }

        while(n)
        {
            if(a[n]==1)
            {
                cout<<n<<endl;
                break;
            }
            n--;
        }
    }

    return 0;
}
