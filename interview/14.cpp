#include <iostream>
#include <fstream>
using namespace std;

bool isEven(int number)
{
    if (number & 0x1 == 1)
        return false;

    return true;
}

void Reorder(int *pData, unsigned int length)
{
    if (pData == NULL || length == 0)
        return;

    int *pBegin = pData;
    int *pEnd = pData + length - 1;

    while (pBegin < pEnd)
    {
        while (pBegin < pEnd && !isEven(*pBegin))
            pBegin++;

        while (pBegin < pEnd && isEven(*pEnd))
            pEnd--;

        if (pBegin < pEnd)
        {
            int temp = *pBegin;
            *pBegin = *pEnd;
            *pEnd = temp;
        }
    }
}

void Reorder1(int *pData, unsigned int length)
{
    if (pData == NULL || length == 0)
        return;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (pData[j] % 2 == 0 && pData[j + 1] % 2 == 1)
            {
                int temp = pData[j];
                pData[j] = pData[j + 1];
                pData[j + 1] = temp;
            }
        }
    }
}

void Reorder2(int *pData, unsigned int length)
{
    if (pData == NULL || length == 0)
        return;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            //注意括号的位置
            if (((*(pData + j) & 0x1) == 0) && ((*(pData + j + 1) & 0x1) != 0))
            {
                int temp = *(pData + j);
                *(pData + j) = *(pData + j + 1);
                *(pData + j + 1) = temp;
            }
        }
    }
}


int a[100000];

int main()
{
    freopen("14.in", "r", stdin);

    unsigned int n;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
            scanf("%d", a + i);

        Reorder2(a, n);

        for (int i = 0; i < n - 1; i++)
            printf("%d ", a[i]);
        printf("%d\n", a[n - 1]);
    }

    return 0;
}