#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string,float> m;
    m["Jack"]=98.5;
    m["Bomi"]=92.5;
    m["Kate"]=94.5;
    m["Hunter"]=96.5;
    map<string,float>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        //cout<<(*it).first<<" : "<<(*it).second<<endl;
    }
 //   m.erase("Kate");
    map<string,float>::reverse_iterator rit;
    for(rit=m.rbegin();rit!=m.rend();rit++)
    {
        cout<<(*rit).first<<" : "<<(*rit).second<<endl;
    }
    it=m.find("Kate");
    if(it!=m.end())
        cout<<(*it).first<<" : "<<(*it).second<<endl;
    else
        cout<<"not found it"<<endl;
    return 0;
}
