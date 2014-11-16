#include <iostream>
#include <fstream>
using namespace std;

long long fib(unsigned int n)
{
    if (n <= 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    freopen("1387.in", "r", stdin);

    long long f[71];
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i < 71; i++)
        f[i] = f[i - 1] + f[i - 2];

    int n;
    while (scanf("%d", &n) != EOF)
    {
        //cout<<fib(n)<<endl;
        cout << f[n] << endl;
    }
    return 0;
}