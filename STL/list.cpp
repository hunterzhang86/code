#include <list>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(2);
    l.push_back(5);
    l.push_back(8);
    l.push_back(6);
    l.push_back(3);
    l.push_back(7);
    l.push_back(4);
    list<int>::iterator it;
    it=l.begin();
    it++;
    l.insert(it,20);
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    l.remove(2);
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
