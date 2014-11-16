#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string tansferNumX16(string numX10)
{
    if (numX10.length() <= 0)
        return "error";

    string numX16;

    int num = 0;

    for (int i = 0; i < numX10.length(); i++)
    {
        num *= 10;
        num += (numX10[i] - '0');

        if (num / 16 > 0)
        {
            if (num / 16 > 0 && num / 16 < 10)
                numX16.push_back(num / 16 + '0');
            else if (num / 16 >= 10 && num / 16 <= 15)
                numX16.push_back(num / 16 - 10 + 'A');
            else
            	return "error";
            num %= 16;
        }
    }


    if (num > 0 && num < 10)
        numX16.push_back(num + '0');
    else if (num >= 10 && num <= 15)
        numX16.push_back(num - 10 + 'A');
    else
    	return "error";

    return numX16;
}

int main()
{
    freopen("transferX16.in", "r", stdin);

    string numX10;

    getline(cin, numX10);

    cout << tansferNumX16(numX10) << endl;

    return 0;
}