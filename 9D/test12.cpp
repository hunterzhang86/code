#include <iostream>
using namespace std;

class A
{
private:
    int n1;
    int n2;
public:
    A():n2(n1+1),n1(0)
    {

    }
    void print()
    {
        cout<<n1<<' '<<n2<<endl;
    }
};

int main()
{
    A a;
    a.print();
    return 0;
}
