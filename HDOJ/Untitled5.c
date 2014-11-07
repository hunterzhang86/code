#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    freopen("1088.in","r",stdin);
    freopen("1089.out","w",stdout);
    unsigned count = 0, len;
    string word;

    while (cin >> word)
    {
        if (word == "<br>")
        {
            count = 0;
            cout << endl;
        }
        else if (word == "<hr>")
        {
            if (count > 0)
            {
                count = 0;
                cout << endl;
            }
            cout << string(80, '-') << endl;
        }
        else
        {
            len = word.length();
            count += len;
            if (count + 1 > 80)
            {
                count = len;
                cout << endl << word;
            }
            else
            {
                if (count > len)
                {
                    cout << ' ';
                }
                cout << word;
                ++count;
            }
        }
    }
    cout << endl;
    return 0;
}
