#include <stdio.h>
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    multiset<string> ms;
    ms.insert("abc");
    ms.insert("123");
    ms.insert("111");
    ms.insert("aaa");
    ms.insert("123");
    ms.insert("777");
    multiset<string>::iterator it;
    for(it=ms.begin();it!=ms.end();it++)
        cout<<*it<<endl;
    int n=ms.erase("123");
    cout<<"Total deleted : "<<n<<endl;
    for(it=ms.begin();it!=ms.end();it++)
        cout<<*it<<endl;
    return 0;
}