#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("2024.in","r",stdin);
    int n;
    char ch[51],tmp;
    cin>>n;
    scanf("%c",&tmp);
    while(n--)
    {
        gets(ch);
        int i;
        int flag=0;
        if(ch[0]==95||(ch[0]>=65&&ch[0]<=90)||(ch[0]>=97&&ch[0]<=122))
        {
            flag=1;
        }
        for(i=1;i<strlen(ch);i++)
        {

            if(ch[i]==95||(ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122)||(ch[i]>=48&&ch[i]<=57))
            {
                continue;
            }
            else
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
