#include <iostream>
#include <fstream>
using namespace std;

double PowerWithUnsignedExponent(double base, unsigned int absExponent)
{
    double result = 1.0;

    for (int i = 0; i < absExponent; i++)
        result *= base;

    return result;
}

double PowerWithUnsignedExponent2(double base, unsigned int absExponent)
{
    if (absExponent == 0)
        return 1;
    if (absExponent == 1)
        return base;

    double result = PowerWithUnsignedExponent2(base, absExponent >> 1);
    result *= result;

    if (absExponent & 0x1 == 1)
        result *= base;

    return result;
}

bool equal(double num1, double num2)
{
    if ((num2 - num1) > -0.0000001 && (num2 - num1) < 0.0000001)
        return true;

    return false;
}

bool g_InvalidInput = false;

double Power(double base, int exponent)
{
    g_InvalidInput = false;

    if (equal(base, 0.0) && exponent < 0)
    {
        g_InvalidInput = true;
        return 0.0;
    }

    unsigned int absExponent = (unsigned int)exponent;
    if (exponent < 0)
        absExponent = (unsigned int)(-exponent);

    double result = PowerWithUnsignedExponent2(base, absExponent);

    if (exponent < 0)
        return 1.0 / result;

    return result;
}

int main()
{
    freopen("11.in", "r", stdin);

    int T;
    double base;
    int exponent;
    double result;

    scanf("%d", &T);

    while (T--)
    {
        //注意这里的输入格式
        scanf("%lf %d", &base, &exponent);

        result = Power(base, exponent);

        if (g_InvalidInput)
            printf("INF\n");
        else
            printf("%.2ef\n", result);  //注意这里的输出格式

    }

    return 0;
}