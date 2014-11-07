#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    freopen("1508.in","r",stdin);
    string str;
    while(cin>>str)
    {
        int num=0;
        int i=0,j=0;
        int ok=1;
        for(i=str.length()-1,j=0;i>0;i--,j++)
        {
            if(str[i]>=48&&str[i]<=57)
                num+=(str[i]-'0')*pow(10,j);
            else
            {
                ok=0;
                break;
            }
        }
        if(ok==0)
            cout<<"My God"<<endl;
        else if(str[0]>=48&&str[0]<=57)
        {
            num+=(str[0]-'0')*pow(10,j);
            cout<<num<<endl;
        }
        else if(str[0]=='-')
            cout<<'-'<<num<<endl;
        else if(str[0]=='+')
            cout<<num<<endl;
        else
            cout<<"My God"<<endl;
    }
    return 0;
}
