#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2178.in","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<(1<<n)-1<<endl;
    }
    return 0;
}
