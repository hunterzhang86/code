#include <iostream>
using namespace std;

class A{
public:
    static double rate();
    static void rate(double);
    static const int period=30;
    int year=0;
};

int main()
{
    A a;
    cout<<a.period<<endl;
    return 0;
}
