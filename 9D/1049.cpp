
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    freopen("1049.in","r",stdin);
    string str;
    int i,j,len;
    char ch,tmp;
    while(cin>>str)
    {
        cin>>ch;
        len=str.length();
        for(i=0;i<len;i++)
        {
            if(str[i]==ch)
            {
                for(j=i;j<len;j++)
                    str[j]=str[j+1];
                len--;
            }
        }
        for(i=0;i<len;i++)
            printf("%c",str[i]);
        cout<<endl;
    }


    return 0;
}


/*

#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    freopen("1049.in","r",stdin);
         char a[2000];
         int i,j,l;
         char x;
         while(gets(a))
         {
               cin>>x;getchar();
                for(i=0;a[i]!='\0';i++)
                {
                         if(a[i]!=x)
                            cout<<a[i];
                }
                cout<<endl;
         }
}
*/
