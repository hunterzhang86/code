#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

bool ishuiwen(string str,int s,int e)
{
    while(s<e)
    {
        if(str[s]==str[e])
        {
            s++;
            e--;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    freopen("1528.in","r",stdin);
    string str;
    while(cin>>str)
    {
        int max_huiwen=1;
        for(int i=0;i<str.length();i++)
        {
            for(int j=str.length()-1;j>i;j--)
            {
                if(j-i+1<=max_huiwen)
                    break;
                if(ishuiwen(str,i,j))
                {
                    max_huiwen=j-i+1;
                    break;
                }
            }
        }
        cout<<max_huiwen<<endl;
    }
    return 0;
}
