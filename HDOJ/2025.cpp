#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("2025.in","r",stdin);
    char ch[101];
    while(gets(ch))
    {
        char max=ch[0];
        int i;
        for(i=1;i<strlen(ch);i++)
        {
            if(ch[i]>max)
                max=ch[i];
        }
        for(i=0;i<strlen(ch);i++)
        {
            if(ch[i]==max)
                cout<<ch[i]<<"(max)";
            else
                cout<<ch[i];
        }
        cout<<endl;
    }
    return 0;
}
