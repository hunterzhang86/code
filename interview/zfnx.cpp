#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string itoa(long long num)
{
    string str;

    do
    {
        str.push_back(num % 10 + '0');
        num /= 10;
    }
    while (num);

    return str;
}

int main()
{
    freopen("zfnx.in", "r", stdin);

    long long num;
    string str;

    cin >> num;

    cout << itoa(num) << endl;

    return 0;
}