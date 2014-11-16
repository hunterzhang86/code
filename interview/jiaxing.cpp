#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string jiaxing(string str)
{
    string jiaxingStr = "";

    bool firstNum = false;
    bool lastNum = false;

    for (int i = 0; i < str.length()-1; ++i)
    {
        if ((str[i] < '0' || str[i] > '9') && str[i+1] >= '0' && str[i+1] <= '9')
        {
            firstNum = true;
        }

        else if(str[i] >= '0' && str[i] <= '9' && (str[i+1] < '0' || str[i+1]>'9') )
        {
            lastNum = true;
        }

        if(firstNum == false && lastNum == false)
        	jiaxingStr.push_back(str[i]);

        else if(firstNum == true)
        {
        	jiaxingStr.push_back(str[i]);
        	jiaxingStr.push_back('*');
        	firstNum = false;
        }

        else if(lastNum == true)
        {
        	jiaxingStr.push_back(str[i]);
        	jiaxingStr.push_back('*');
        	lastNum = false;
        }


    }

    jiaxingStr.push_back(str[str.length()-1]);

    if(str[str.length()-1] >= '0' && str[str.length()-1] <= '9')
    	jiaxingStr.push_back('*');

    return jiaxingStr;
}

int main()
{
    freopen("jiaxing.in", "r", stdin);

    string str;

    getline(cin, str);

    cout << jiaxing(str) << endl;

    return 0;
}