#include <iostream>
#include <fstream>
using namespace std;

//AC ������֪��������� 쳲���������
int main()
{
    freopen("2041.in","r",stdin);
    int a[41];
    a[1]=0;a[2]=1;a[3]=2;
    int i;
    for(i=4;i<=40;i++)
        a[i]=a[i-1]+a[i-2];
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        cout<<a[m]<<endl;
    }
    return 0;
}
