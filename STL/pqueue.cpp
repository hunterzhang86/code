#include <iostream>
#include <fstream>
#include <string>
#include <queue>
using namespace std;

struct Info
{
    string name;
    float score;
    bool operator < (const Info &a) const
    {
        return a.score<score;
    }
};

int main()
{
    freopen("pqueue.in","r",stdin);
    priority_queue<Info> pq;
    Info info;
    string n;
    float s;
    while(cin>>n>>s)
    {
        info.name=n;
        info.score=s;
        pq.push(info);
    }
    while(pq.empty()!=true)
    {
        cout<<pq.top().name<<"\t"<<pq.top().score<<endl;
        pq.pop();
    }
    return 0;
}


