#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int CalcCapital(string str)
{
    int len = str.length();
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            count++;
    }

    return count;
}

int main()
{
    freopen("CalcCapital.in", "r", stdin);

    string str;

    getline(cin,str);

    cout << CalcCapital(str) << endl;

    return 0;
}