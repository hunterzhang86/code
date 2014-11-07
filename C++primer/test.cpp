#include <iostream>
using namespace std;

const string &manip(const string &s)
{
    string ret=s;
    return ret;
}

int main()
{
    string s="yes";
    s=manip(s);
    cout<<s<<endl;
    return 0;
}
