#include <iostream>
#include <fstream>
using namespace std;

int add(int m,int n)
{
    int sum,carry;
    int num1=m;
    int num2=n;
    do{
        sum = num1 ^ num2;
        carry = (num1 & num2) << 1;
        num1 = sum;
        num2 = carry;
    }while(carry);
    return sum;
}

int main()
{
    freopen("1507.in","r",stdin);
    int m,n;
    while(cin>>m>>n)
    {
        cout<<add(m,n)<<endl;
    }
    return 0;
}
