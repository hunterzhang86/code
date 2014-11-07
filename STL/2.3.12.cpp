#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    string s;
    s="132324247879";
    printf(s.c_str());
    cout<<endl;
    int i;
    int sum=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0')   sum+=0;
        else if(s[i]=='1')  sum+=1;
        else if(s[i]=='2')  sum+=2;
        else if(s[i]=='3')  sum+=3;
        else if(s[i]=='4')  sum+=4;
        else if(s[i]=='5')  sum+=5;
        else if(s[i]=='6')  sum+=6;
        else if(s[i]=='7')  sum+=7;
        else if(s[i]=='8')  sum+=8;
        else if(s[i]=='9')  sum+=9;
    }
    cout<<sum<<endl;
    return 0;
}
