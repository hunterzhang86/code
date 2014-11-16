#include <iostream>
#include <string>
#include <cassert>
#include <fstream>
using namespace std;

string maxGCcurRatio(string str, int CGlength)
{
    double curRatio = 0.0;
    double maxRatio = 0.0;

    assert(CGlength <= str.length());

    int startMaxRatioIndex = 0;

    double addRatio = (double)(1.0 / CGlength);

    for (int i = 0; i < CGlength; i++)
    {
        if (str[i] == 'C' || str[i] == 'G')
            curRatio += addRatio;
    }

    if (curRatio >= maxRatio)
        maxRatio = curRatio;

    for (int i = CGlength; i < str.length(); i++)
    {
        if ((str[i] == 'C' || str[i] == 'G') && (str[i - CGlength] != 'C' && str[i - CGlength] != 'G'))
            curRatio += addRatio;

        else if ((str[i] != 'C' && str[i] != 'G') && (str[i - CGlength] == 'C' || str[i - CGlength] == 'G'))
            curRatio -= addRatio;

        if (curRatio > maxRatio)
        {
            maxRatio = curRatio;
            startMaxRatioIndex = i - CGlength + 1;
        }
    }

    int endMaxRatioIndex = startMaxRatioIndex + CGlength - 1;

    string startMaxRatioStr;

    for (int i = startMaxRatioIndex; i <= endMaxRatioIndex; i++)
        startMaxRatioStr.push_back(str[i]);

    return startMaxRatioStr;
}

int main()
{
    freopen("dna.in", "r", stdin);

    string str;
    int length;

    getline(cin, str);
    cin >> length;


    string strOutput;

    double curRatio = 0.0;
    double maxRatio = 0.0;
    double addRatio = 0.0;

    for (int i = length; i <= str.length(); i++)
    {
        curRatio = 0.0;
        addRatio = (double)(1.0 / i);

        string strTmp = maxGCcurRatio(str, i);

        for (int j = 0; j < i; j++)
        {
            if (strTmp[j] == 'C' || strTmp[j] == 'G')
                curRatio += addRatio;
        }

        if (curRatio > maxRatio)
        {
            maxRatio = curRatio;
            strOutput = strTmp;
        }
    }

    cout << strOutput << endl;

    return 0;
}