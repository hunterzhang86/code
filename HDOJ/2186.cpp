#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2186.in","r",stdin);
    int x;
    cin>>x;
    while(x--)
    {
        int n;
        int a,b,c;
        int sum=0;
        cin>>n;
        a=n/2;
        b=(n-a)*2/3;
        c=n-a-b;
        sum=(a-1)/10+(b-1)/10+(c-1)/10+3;
        cout<<sum<<endl;
    }
    return 0;
}
