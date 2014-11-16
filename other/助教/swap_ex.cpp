#include <iostream>
using namespace std;

void swap(int &rx,int &ry);

int main()
{
    int x=5,y=6;
    cout<<"before swap:x is "<<x<<",y is "<<y<<endl;
    swap(x,y);
    cout<<"after swap:x is "<<x<<",y is "<<y<<endl;
    return 0;
}

void swap(int &rx,int &ry)
{
    int temp;
    temp=rx;
    rx=ry;
    ry=temp;
}
