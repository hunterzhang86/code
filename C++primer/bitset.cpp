#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    string s("1100");
    bitset<32> bit(s);
    if(bit.any())
        cout<<"yes"<<endl;
    cout<<bit.count()<<endl;
    cout<<bit.size()<<endl;
    bit.set();
    cout<<bit[1]<<endl;
    return 0;
}
