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
        for(i=0;i<strlen(ch);i++)   //ע����ANSI���룬���ֵ�ascii��ֵС��0���������ַ��洢���������Ҫ����2
        {
            if(ch[i]<0)
                sum++;
        }
        cout<<sum/2<<endl;
    }
    return 0;
}

