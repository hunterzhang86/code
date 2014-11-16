#include <iostream>
#include <fstream>
using namespace std;

bool VerifySquenceOFBT(int sequence[], int length)
{
    if (sequence == NULL || length <= 0)
        return false;

    int root = sequence[length - 1];

    int i = 0;
    for (; i < length - 1; i++)
    {
        if (sequence[i] > root)
            break;
    }

    int j = i;
    for (; j < length - 1; j++)
    {
        if (sequence[j] < root)
            return false;
    }

    bool left , right;
    left = right = true;

    if (i > 0)
        VerifySquenceOFBT(sequence, i);

    if (j < length - 1)
        VerifySquenceOFBT(sequence + i, length - i - 1);

    return left && right;
}

int main()
{
    freopen("24.in", "r", stdin);

    int length;

    while (scanf("%d", &length) != EOF)
    {
        int sequence[length];

        for (int i = 0; i < length; i++)
            scanf("%d", &sequence[i]);

        if (VerifySquenceOFBT(sequence, length))
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    return 0;
}