#include <iostream>
#include <string>
using namespace std;

bool judge(int num)
{
    int n = num * num;
    string str;

    while (n)
    {
        str.push_back(n % 10);
        n /= 10;
    }

    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
            return false;
    }

    return true;
}

int main()
{
    for (int i = 0; i < 256; i++)
    {
        if (judge(i))
            cout << i << endl;
    }
    return 0;
}