#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("2029.in","r",stdin);
    int n;
    cin>>n;
    char tmp;
    scanf("%c",&tmp);
    while(n--)
    {
        char ch[100];
        gets(ch);
        int i,j;
        int flag=1;
        for(i=0,j=strlen(ch)-1;i<=j;i++,j--)
        {
            if(ch[i]!=ch[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
