#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("3177.in","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int v,n;
        int a[1000],b[1000];
        cin>>v>>n;
        int i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        for(i=0;i<n;i++)    //这里才是精髓，赚的越多的永远
            for(j=0;j<n-i-1;j++)
            {
                if((b[j]-a[j])<(b[j+1]-a[j+1]))
                {
                    int tmp;
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                    tmp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=tmp;
                }
            }
        int flag=1;
        for(i=0;i<n;i++)
        {
            if(v<b[i])
            {
                flag=0;
                break;
            }
            v=v-a[i];
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
