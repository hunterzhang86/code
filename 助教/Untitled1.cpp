#include <iostream>
using namespace std;

class Taxi
{
    public:
        void setLen_Price(int len,int price);
        void sum();
    private:
        int len,price;
};

void Taxi::setLen_Price(int l,int p)
{
    len=l;
    price=p;
}

void Taxi::sum()
{
    cout<<len*price;
}

int main()
{
    Taxi taxi;
    int a,b;
    cin>>a>>b;
    taxi.setLen_Price(a,b);
    taxi.sum();
    return 0;
}
