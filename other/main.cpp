#include <iostream>
#include <fstream>
#include "product.hpp"
#define N 3
using namespace std;

class Date;

class Time{
public:
    Time();
    Time(int,int,int);
    friend void display(const Date &,const Time &);
private:
    int hour;
    int minute;
    int sec;
};

Time::Time(int h,int m,int s)
{
    hour=h;
    minute=m;
    sec=s;
}

class Date{
public:
    Date();
    Date(int,int,int);
    friend void display(const Date &,const Time &);
private:
    int month;
    int day;
    int year;
};

Date::Date(int m,int d,int y)
{
    month=m;
    day=d;
    year=y;
}

void display(const Date &d,const Time &t)
{
    cout<<"Ê±¼äÎª£º"<<endl;
    cout<<d.month<<'/'<<d.day<<'/'<<d.year<<endl;
    cout<<t.hour<<':'<<t.minute<<':'<<t.sec<<endl;
}

void test()
{
    int  num,quantity;
    float price;
    Product P[N];
    int i=0;
    while(cin>>num>>quantity>>price)
    {
        P[i++]=Product(num,quantity,price);
    }
    for(i=0;i<N;i++)
        P[i].total();
    Product::display();
}

int main()
{
    freopen("E:\\code\\test\\cpp.in","r",stdin);
    test();
    Time T(10,13,56);
    Date D(12,25,2004);
    display(D,T);
    return 0;
}
