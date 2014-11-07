#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("2030.in","r",stdin);
    int n;
    cin>>n;
    char tmp;
    scanf("%c",&tmp);
    while(n--)
    {
        char ch[200];
        gets(ch);
        int i;
        int sum=0;
        for(i=0;i<strlen(ch);i++)   //注意以ANSI编码，汉字的ascii码值小于0，用两个字符存储，所以最后要除以2
        {
            if(ch[i]<0)
                sum++;
        }
        cout<<sum/2<<endl;
    }
    return 0;
}

