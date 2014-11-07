#include <iostream>
using namespace std;

class X{
    friend class Y;
    friend void f();
};

class Y;

void f()
{
    cout<<"yes"<<endl;
}

class Z{
    Y *y;
    void g()
    {
        return ::f();
    }
};

int main()
{
    return 0;
}
