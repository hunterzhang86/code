#include <iostream>
#include <fstream>
#include <queue>
using namespace std;

int main()
{
    freopen("queue.in" ,"r", stdin);
    queue<int> q;
    int tmp;
    while(cin>>tmp)
        q.push(tmp);
    while(q.empty()!=true)
    {
        cout<<q.front()<<' ';
        q.pop();
    }
    cout<<endl;
    return 0;
}

