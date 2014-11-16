#include <iostream>
#include <fstream>
using namespace std;

int oneCount(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num = num & (num - 1);
    }
    return count;
}

int main()
{
    freopen("10.in", "r", stdin);
    int T;
    int num;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &num);
        cout << oneCount(num) << endl;
    }
    return 0;
}