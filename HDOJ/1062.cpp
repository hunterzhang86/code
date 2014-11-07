#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("1062.in","r",stdin);
    int n,tmp;
    string s,s1;
    char ch[1000];
    cin>>n;
    cin>>tmp;
    while(n--)
    {
        gets(ch);
        s=ch;
        int i,j;
        i=j=0;
        while(j<s.length()+1)
        {
            if(s[j]!=' ')
            {
                reverse(i,j);
                i=j;
                //s.insert(j,' ');
            }
            if(s[j]!='\n')
            {
                reverse(i,j);
            }
            j++;
        }
        cout<<s<<endl;

    }
    return 0;
}

