#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("1076.in","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
        int year;
        int count;
        cin>>year>>count;
        int i;
        for(i=year;count>0;i++)
        {
            if((i%4==0&&i%100!=0)||i%400==0)
                count--;
        }
        cout<<--i<<endl;
    }
    return 0;
}
