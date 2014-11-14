#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class Solution
{
public:
    int atoi(const char *str)
    {
        int num = 0, flag = 1, i = 0;   //flag 代表是否为正数

        while (str[i] == ' ')
            i++;

        if (str[i] == '-' || str[i] == '+')
            flag = 1 - 2 * (str[i++] == '-');

        while (str[i] >= '0' && str[i] <= '9')
        {
            if (num >  INT_MAX / 10 || (num == INT_MAX / 10 && str[i] - '0' > 7))   //判断结果是否可能出现最大的正整数2147483647
            {
                if (flag == 1)  return INT_MAX;
                else return INT_MIN;
            }
            num  = 10 * num + (str[i++] - '0');
        }

        return flag * num;
    }
};

int main()
{
    freopen("atoi.in", "r", stdin);

    Solution s;
    char str[100];

    while (gets(str))
    {
        cout << s.atoi(str) << endl;
    }

    return 0;
}