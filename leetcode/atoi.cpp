#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class Solution
{
public:
    int atoi(const char *str)
    {
        int num = 0;
        bool flag = true;
        int i = 0;

        while (str[i] == ' ')
            i++;

        if (str[i] == '-')
        {
            flag = false;
            i++;
        }

        else if (str[i] == '+')
        {
            flag = true;
            i++;
        }

        while (str[i] >= '0' && str[i] <= '9')
        {
            if (num >  INT_MAX / 10 || (num == INT_MAX / 10 && str[i] - '0' > 7))
            {
                if (flag == 1) return INT_MAX;
                else return INT_MIN;
            }
            num  = 10 * num + (str[i++] - '0');
        }

        if (flag == true)
            return num;
        else
            return -num;
    }
};

int main()
{
    freopen("atoi.in", "r", stdin);

    Solution s;
    char str[32];

    while (gets(str))
    {
        cout << s.atoi(str) << endl;
    }

    return 0;
}