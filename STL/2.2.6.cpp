#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10);
    for(int i=0;i<10;i++)
        v[i]=i;
    v.erase(v.begin()+2);
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<v.size()<<endl;
    return 0;
}


