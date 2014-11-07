#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    char sa[100],sb[100],sc[100];
    sscanf("abc 124 pc","%s %s %s",sa,sb,sc);
    s1=sa;
    s2=sb;
    s3=sc;
    cout<<s1<<" "<<s2<<" "<<s3<<endl;
    int a,b,c;
    sscanf("1 2 3","%d %d %d",&a,&b,&c);
    cout<<a+b+c<<endl;
    return 0;
}
