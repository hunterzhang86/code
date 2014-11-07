#include <iostream>
using namespace std;

class myclass{
private:
    int val;
public:
    myclass(int i=0)
    {
        val=i;
    }
    myclass(myclass& cp);
    void set(int i);
    void print();
    ~myclass();
};

myclass::myclass(myclass& cp)
{
    val=cp.val;
    cout<<"Hi,val="<<val<<endl;
}

void myclass::set(int i)
{
    val=i;
}

void myclss::print()
{
    cout<<"This Print val="<<val<<endl;
}

myclass::~myclass()
{
    cout<<"Des for val="<<val<<endl;
}

myclass myfun(myclass obj)
{
    obj.print();
    obj.set(10);
    return obj;
}

void gFun()
{
    myclass my(5),ret;
    ret=myfun(my);
}

int main()
{
    gFun();
    cout<<"Exit main"<<endl;
    return 0;
}
