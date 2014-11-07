#include <iostream>
#include <fstream>
#define N 100
using namespace std;

int len;

void init(int num[N][N])
{
    int i,j;
    for(i=0;i<len;i++)
        for(j=0;j<len;j++)
            cin>>num[i][j];
}

void out(int num[N][N])
{
    int i,j;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            printf("%d\t",num[i][j]);
        }
        cout<<endl;
    }
}

void add(int a[N][N],int b[N][N],int sum[N][N])
{
    int i,j;
    for(i=0;i<len;i++)
        for(j=0;j<len;j++)
            sum[i][j]=a[i][j]+b[i][j];
}

int main()
{
    freopen("zj.in","r",stdin);
    int a[N][N],b[N][N],sum[N][N];
    cin>>len;
    init(a);
    init(b);
    add(a,b,sum);
    cout<<"A: "<<endl;
    out(a);
    cout<<"B: "<<endl;
    out(b);
    cout<<"SUM: "<<endl;
    out(sum);
    return 0;
}
