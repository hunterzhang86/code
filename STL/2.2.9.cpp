#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int i;
    for(i=0;i<10;i++)
        v.push_back(i);
    cout<<v.size()<<endl;
    cout<<v.empty()<<endl;
    v.clear();
    cout<<v.size()<<endl;
    return 0;
}
