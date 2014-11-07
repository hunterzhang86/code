#include <iostream>
#include <fstream>
#define PI 3.1415927
using namespace std;

int main()
{
    freopen("2005.in","r",stdin);
    char ch[10];
    int year,month,day;
    int flag=0;
    while(gets(ch))
    {
        flag=0;
        sscanf(ch,"%d/%d/%d",&year,&month,&day);
        if((year%4==0&&year%100!=0)||year%400==0)
            flag=1;
        if(month==1)
        {
            cout<<day<<endl;
        }
        else if(month==2)
        {
            cout<<31+day<<endl;
        }
        else if(month==3)
        {
            if(flag)
                cout<<31+29+day<<endl;
            else
                cout<<31+28+day<<endl;
        }
        else if(month==4)
        {
            if(flag)
                cout<<31+29+31+day<<endl;
            else
                cout<<31+28+31+day<<endl;
        }
        else if(month==5)
        {
            if(flag)
                cout<<31+29+31+30+day<<endl;
            else
                cout<<31+28+31+30+day<<endl;
        }
        else if(month==6)
        {
            if(flag)
                cout<<31+29+31+30+31+day<<endl;
            else
                cout<<31+28+31+30+31+day<<endl;
        }
        else if(month==7)
        {
            if(flag)
                cout<<31+29+31+30+31+30+day<<endl;
            else
                cout<<31+28+31+30+31+30+day<<endl;
        }
        else if(month==8)
        {
            if(flag)
                cout<<31+29+31+30+31+30+31+day<<endl;
            else
                cout<<31+28+31+30+31+30+31+day<<endl;
        }
        else if(month==9)
        {
            if(flag)
                cout<<31+29+31+30+31+30+31+31+day<<endl;
            else
                cout<<31+28+31+30+31+30+31+31+day<<endl;
        }
        else if(month==10)
        {
            if(flag)
                cout<<31+29+31+30+31+30+31+31+30+day<<endl;
            else
                cout<<31+28+31+30+31+30+31+31+30+day<<endl;
        }
        else if(month==11)
        {
            if(flag)
                cout<<31+29+31+30+31+30+31+31+30+31+day<<endl;
            else
                cout<<31+28+31+30+31+30+31+31+30+31+day<<endl;
        }
        else if(month==12)
        {
            if(flag)
                cout<<31+29+31+30+31+30+31+31+30+31+30+day<<endl;
            else
                cout<<31+28+31+30+31+30+31+31+30+31+30+day<<endl;
        }
    }
    return 0;
}

