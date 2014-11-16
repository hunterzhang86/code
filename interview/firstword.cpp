#include <iostream>
#include <string>
#include <fstream>
using namespace std;

char FirstNotRepeatingChar(string pString)
{
    const int tableSize = 256;

    unsigned int hashTable[tableSize];

    for (int i = 0; i < tableSize; ++i)
    {
        hashTable[i] = 0;
    }

    for (int i = 0; i < pString.length(); ++i)
    {
        hashTable[pString[i]]++;
    }

    string repeatChar;

    for (int i = 0; i < tableSize; ++i)
    {
        if (hashTable[i] == 1)
            repeatChar.push_back(i);
    }

    for (int i = 0; i < pString.length(); i++)
    {
        for (int j = 0; j < repeatChar.length(); j++)
        {
            if (pString[i] == repeatChar[j])
                return pString[i];
        }
    }

    return '.';
}

int main()
{
    freopen("firstword.in", "r", stdin);

    string str;

    getline(cin, str);

    cout << FirstNotRepeatingChar(str) << endl;

    return 0;
}