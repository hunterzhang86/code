#include <iostream>
#include <fstream>
using namespace std;

int sum=0,carry=0;

int add(int num)
{
    int num1=num;
    int num2=num-1;
    sum=num1+num2;
    add(num-2);
    return sum;
}

int main()
{
    freopen("1506.in","r",stdin);
    int num;
    while(cin>>num)
    {
        sum=0;
        carry=0;
        cout<<add(num)<<endl;
    }
    return 0;
}
