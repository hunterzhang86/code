#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2017.in","r",stdin);
    int n;
    char tmp;
    cin>>n;
    scanf("%c",&tmp);
    while(n--)
    {
        char ch;
        int sum=0;
        while(scanf("%c",&ch)!=EOF&&ch!='\n')
        {
            if(ch>=48&&ch<=57)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
