#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;

int main()
{
    freopen("bitset.in" ,"r", stdin);
    bitset<10> b;
    //b.set();
    b.set(0);
    int tmp;
    int i=0;
    while(cin>>tmp)
    {
        b[i]=tmp;
        i=i+3;
    }
    for(i=b.size()-1;i>=0;i--)
        cout<<b[i];
    cout<<endl;
    cout<<b<<endl;
    return 0;
}
