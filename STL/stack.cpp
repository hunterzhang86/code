#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int main()
{
    freopen("stack.in" ,"r", stdin);
    stack<int> s;
    int tmp;
    while(cin>>tmp)
        s.push(tmp);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    while(s.empty()!=true)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}

