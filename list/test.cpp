#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=1;i<10;i++)
        v.push_back(i);
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;
    for(vector<int>::reverse_iterator rit=v.rbegin();rit!=v.rend();rit++)
        cout<<*rit<<endl;
    if(v.empty())
        cout<<"yes"<<endl;
    v.erase(v.begin()+1);
    cout<<v[1]<<endl;
    return 0;
}
