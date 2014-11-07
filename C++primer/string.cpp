#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
/*
    getline(cin,s);
    cout<<s<<endl;
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
*/
    string st("hello world\n");
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;

    string s1="zhang",s2="huan";
    cout<<s1+s2<<endl;

    if(isalnum(s1[2]))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;


    return 0;
}
