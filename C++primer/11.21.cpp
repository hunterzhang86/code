#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    int a[]={1,2,10,3,6,7,10,4,5,6};
    list<int> ls(a,a+10);
    list<int>::reverse_iterator rit;
    rit=find(ls.rbegin(),ls.rend(),0);
    if(rit!=ls.rend())
        cout<<*(++rit)<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
