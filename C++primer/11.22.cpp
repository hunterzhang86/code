#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    vector<int> v(a,a+10);
    list<int> lst;
    vector<int>::reverse_iterator rstart,rend;
    rstart=v.rbegin();
    for(int i=0;i<3;i++)
        rstart++;
    rend=rstart;
    for(int i=0;i<6;i++)
        rend++;
    copy(rstart,rend,inserter(lst,lst.begin()));
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
        cout<<*it<<endl;
    return 0;
}
