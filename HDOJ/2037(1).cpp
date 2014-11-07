#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

struct Node
{
    int start,end;
};

int cmp(Node x,Node y)
{
    return x.end<y.end;
}

int main()
{
    freopen("2037.in","r",stdin);
    int n;
    struct Node a[100];
    while(cin>>n&&n!=0)
    {
        int i;
        for(i=0;i<n;i++)
            cin>>a[i].start>>a[i].end;
        sort(a,a+n,cmp);
        int count=1;
        int flag=a[0].end;
        for(i=1;i<n;i++)
        {
            if(a[i].start>=flag)
            {
                count++;
                flag=a[i].end;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
