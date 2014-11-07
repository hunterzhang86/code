#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
//    freopen("1.out","w",stdout);
//    char ch1[5]={'a','b','c'};
    char ch[9]="abc";
//    cout<<sizeof ch1<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<strlen(ch)<<endl;
    cout<<ch[6]<<endl;
    return 0;
}
