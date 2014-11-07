#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(4);
    d.pop_back();
    d.insert(d.begin()+2,88);
    cout<<d[0]<<" "<<d[2]<<" "<<d[4]<<endl;
    return 0;
}
