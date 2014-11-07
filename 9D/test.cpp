#include <iostream>
#include <fstream>
using namespace std;
const int MAXN=50;
int queue[MAXN];

int main()
{
    int n,front,rear;
    cin>>n;
    for(int i=0;i<n;i++)
        queue[i]=i+1;
    front=0;
    rear=n;
    while(front<rear)
    {
        cout<<queue[front++]<<' ';
        queue[rear++]=queue[front++];
    }
    return 0;
}
