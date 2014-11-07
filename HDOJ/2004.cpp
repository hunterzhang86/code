#include <iostream>
#include <fstream>
#define PI 3.1415927
using namespace std;

int main()
{
    freopen("2004.in","r",stdin);
    int n;
    while(cin>>n)
    {
        if(n>=90&&n<=100)
            cout<<'A'<<endl;
        else if(n>=80&&n<=89)
            cout<<'B'<<endl;
        else if(n>=70&&n<=79)
            cout<<'C'<<endl;
        else if(n>=60&&n<=69)
            cout<<'D'<<endl;
        else if(n>=0&&n<=59)
            cout<<'E'<<endl;
        else
            cout<<"Score is error!"<<endl;
    }
    return 0;
}

