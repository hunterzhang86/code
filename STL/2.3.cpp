#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    s="i love YOU";
    cout<<s<<endl;
    s=s+'a';
    cout<<s<<endl;
    s=s+"adbadkfjasd";
    cout<<s<<endl;
    s.append("yes");
    cout<<s<<endl;
    string::iterator it;
    it=s.begin();
    s.insert(it+1,'f');
    cout<<s<<endl;
    cout<<s[0]-'i'<<endl;
    s.erase(it,it+4);
    cout<<s<<endl;
 //   s="";
 //   cout<<s<<endl;
    s.replace(3,3,"good");
    cout<<s<<endl;
    cout<<s.find("yes")<<endl;
    cout<<s.compare("yeah")<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
