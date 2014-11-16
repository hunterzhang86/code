#include <iostream>
#include <fstream>
using namespace std;

long long fib(unsigned int step)
{
    if (step <= 0)
        return 0;
    if (step == 1)
        return 1;
    if (step == 2)
        return 2;
    return fib(step - 1) + fib(step - 2);
}

int main()
{
    freopen("1388.in", "r", stdin);

    long long f[71];
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i < 71; i++)
        f[i] = f[i - 1] + f[i - 2];

    unsigned int step;
    while (scanf("%d", &step) != EOF)
    {
        //printf("%d\n", fib(step));
        printf("%lld\n", f[step]);  //注意这个要用%lld输出数据
    }
    return 0;
}