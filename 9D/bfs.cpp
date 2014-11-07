#include <iostream>
#include <fstream>
#include <set>
#include <cstring>
using namespace std;

set<int> vis;
typedef int State[9];
const int MAXSTATE=1000000;
State st[MAXSTATE],goal;
int dist[MAXSTATE];

const int dx[]={-1,1,0,0};
const int dy[]={0,0,-1,1};

void init_lookup_table()
{
    vis.clear();
}

int try_to_insert(int s)
{
    int v = 0;
    for(int i=0;i<9;i++)
        v=v*10+st[s][i];
    if(vis.count(v))
        return 0;
    vis.insert(v);
    return 1;
}

int bfs()
{
    init_lookup_table();
    int front=1,rear=2;
    while(front<rear)
    {
        State& s=st[front];
        if(memcmp(goal,s,sizeof(s))==0)
            return front;
        int z;
        for(z=0;z<9;z++)
            if(!s[z])
                break;
        int x=z/3,y=z%3;
        for(int d=0;d<4;d++)
        {
            int newx=x+dx[d];
            int newy=y+dy[d];
            int newz=newx*3+newy;
            if(newx>=0&&newx<3&&newy>=0&&newy<3)
            {
                State& t=st[rear];
                memcpy(&t,&s,sizeof(s));
                t[newz]=s[z];
                t[z]=s[newz];
                dist[rear]=dist[front]+1;
                if(try_to_insert(rear))
                    rear++;
            }
        }
        front++;
    }
    return 0;
}

int main()
{
    freopen("bfs.in","r",stdin);
    for(int i=0;i<9;i++)
        scanf("%d",&st[1][i]);
    for(int i=0;i<9;i++)
        scanf("%d",&goal[i]);
    int ans=bfs();
    if(ans>0)
        cout<<dist[ans]<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
