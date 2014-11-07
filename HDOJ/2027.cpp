#include <iostream>
#include <fstream>
#include <map>
#include <cstring>
using namespace std;

int main()
{
    freopen("2027.in","r",stdin);
    map<char,int> m;
    char ch[101],tmp;
    int n;
    cin>>n;
    scanf("%c",&tmp);
    while(n--)
    {
        m['a']=0;
        m['e']=0;
        m['i']=0;
        m['o']=0;
        m['u']=0;
        gets(ch);
        int i;
        map<char,int>::iterator it;
        for(i=0;i<strlen(ch);i++)
        {
            for(it=m.begin();it!=m.end();it++)
            {
                if(ch[i]==(*it).first)
                    m[ch[i]]++;
            }
        }
        for(it=m.begin();it!=m.end();it++)
        {
            cout<<(*it).first<<':'<<(*it).second<<endl;
        }
        if(n>0)
            cout<<endl;
    }
    return 0;
}
