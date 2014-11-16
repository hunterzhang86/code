#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int LenOfLastWord(char *str)
{
    int length = strlen(str);
    int lengthLastWord = 0;

    while(str[length-1] == ' ')
        length--;

    for (int i = length - 1; i >= 0; i--)
    {
        if(str[i] == ' ')
            break;

        lengthLastWord++;
    }

    return lengthLastWord;
}

int main()
{
    freopen("zhdcdcd.in", "r", stdin);

    char str[129];

    while (gets(str))
    {
        cout << LenOfLastWord(str) << endl;
    }

    return 0;
}