#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v(3);
    int i;
    for(i=0;i<10;i++)
        v.push_back(9-i);
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}


