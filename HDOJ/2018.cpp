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
                a[i]=a[i-1]+a[i-3]; //a[i]��a[i-1]��ľ���a[i-3],a[i-3]�����³�����ͷ��
            }
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}
