#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void reverseStr(string &str)
{
    int i, j;
    i = 0;
    j = str.length() - 1;

    while (i < j)
    {
        int tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;

        i++;
        j--;
    }
}

int main()
{
    freopen("zfcfz.in", "r", stdin);

    string str;

    getline(cin, str);

    reverseStr(str);

    for (int i = 0; i < str.length(); i++)
        cout << str[i];

    cout << endl;

    return 0;
}