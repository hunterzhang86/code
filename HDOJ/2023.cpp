#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2023.in","r",stdin);
    int n,m;
    int a[51][6];
    float avg[6];
    while(cin>>n>>m)
    {
        int i,j;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>a[i][j];
        for(i=0;i<n;i++)
        {
            float sum=0;
            for(j=0;j<m;j++)
            {
                sum=sum+a[i][j];
            }
            if(i==0)
                printf("%.2f",sum/m);
            else
                printf(" %.2f",sum/m);
        }
        cout<<endl;
        for(i=0;i<m;i++)
        {
            float sum=0;
            for(j=0;j<n;j++)
            {
                sum=sum+a[j][i];
            }
            avg[i]=sum/n;
            if(i==0)
                printf("%.2f",sum/n);
            else
                printf(" %.2f",sum/n);
        }
        cout<<endl;
        int overAvg=0;
        for(i=0;i<n;i++)
        {
            int flag=1;
            for(j=0;j<m;j++)
            {
                if(a[i][j]<avg[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
                overAvg++;
        }
        cout<<overAvg<<endl<<endl;  //每个实例后面需要有个空行
    }
    return 0;
}
