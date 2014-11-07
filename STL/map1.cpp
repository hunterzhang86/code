#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<char,int> m;
    int i,j;
    for(i=0;i<10;i++)
        m['0'+i]=i;
    string sa,sb;
    sa="6234";
    int sum=0;
    for(i=0;i<sa.length();i++)
        sum+=m[sa[i]];
    cout<<"sum = "<<sum<<endl;
    return 0;
}
