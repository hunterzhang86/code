#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("1389.in", "r", stdin);

    long long f[51];
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i < 51; i++)
        f[i] = f[i - 1] << 1;

    unsigned int step;
    while (scanf("%d", &step) != EOF)
    {
        printf("%lld\n", f[step]);  //注意这个要用%lld输出数据
    }
    return 0;
}