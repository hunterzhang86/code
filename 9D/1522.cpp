//为什么不能AC

#include <iostream>
#include <fstream>
#include <stack>
#include <cstring>
using namespace std;

int min(stack<int> s)
{
    int min=s.top();
    while(!s.empty())
    {
        if(s.top()<min)
            min=s.top();
        s.pop();
    }
    return min;
}

int main()
{
    freopen("1522.in","r",stdin);
    int n;
    while(cin>>n)
    {
        getchar();
        stack<int> s;
        char ch;
        int tmp;
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%c",&ch);
            if(ch=='s')
            {
                scanf("%d\n",&tmp);
                s.push(tmp);
                printf("%d\n",min(s));
            }
            else if(ch=='o')
            {
                getchar();
                if(!s.empty())
                {
                    s.pop();
                    printf("%d\n",min(s));
                }
                else
                    printf("NULL\n");
            }
        }
    }
    return 0;
}
