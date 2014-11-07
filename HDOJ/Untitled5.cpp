#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("2025.in","r",stdin);
    char ch[101];
    int index[101];
    while(gets(ch))
    {
        char max=ch[0];
        int i,j;
        j=-1;
        for(i=0;i<101;i++)
            index[i]=-1;
        for(i=0;i<strlen(ch);i++)
        {
            if(max<ch[i])
            {
                max=ch[i];
                j=-1;
                index[++j]=i;
            }
            else if(max==ch[i])
            {
                index[++j]=i;
            }
        }
        i=0;
        j=0;
        while(i<strlen(ch))
        {
            cout<<ch[i];
            if(i==index[j])
            {
                cout<<"(max)";
                j++;
            }
            i++;
        }
        cout<<endl;
    }
    return 0;
}
