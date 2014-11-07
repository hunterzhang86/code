#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=1;i<10;i++)
        v.push_back(i);
    for(vector<int>::const_iterator i=v.begin();i != v.end();i++)
        cout<<*i<<endl;
    return  0;
}
