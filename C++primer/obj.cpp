#include <iostream>
using namespace std;

class A{
public:
    void print();
};

void A::print()
{
    cout<<"yes"<<endl;
}

class B:public A{
public:
    void print()
    {
        cout<<"no"<<endl;
    }
};

class C:public B{

};

int main()
{
    C b;
    b.print();
    return 0;
}
