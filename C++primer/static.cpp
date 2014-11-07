#include <iostream>
using namespace std;

class A{
public:
    static double rate()
    {
        return 1;
    }
};

void test()
{
    A a1;
    A *a2=&a1;
    double rate;
    rate = a1.rate();
    rate = a2->rate();
    rate = A::rate();
}

int main()
{
    test();
    return 0;
}
