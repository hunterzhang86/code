#include <iostream>
#include <fstream>
using namespace std;

void reverse(char ch[],int start,int end)
{
    int i,j;
    for(i=start,j=end;i<j;i++,j--)
    {
        char tmp=ch[i];
        ch[i]=ch[j];
        ch[j]=tmp;
    }
}

int main()
{
    freopen("t1.in","r",stdin);
    char ch[100010];
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        getchar();
        gets(ch);
        int start=0;
        for(int i=0;i<n;i++)
        {
            if((ch[i]!=' ')&&(ch[i+1]==' '||i==n-1))
            {
                while(ch[start]==' ')
                    start++;
                reverse(ch,start,i);
                start=i+1;
            }
        }
        for(int i=0;i<n;i++)
        {

            if(ch[i]==' '&&(ch[i-1]==' '))
                continue;
            printf("%c",ch[i]);
        }
        cout<<endl;
    }
    return 0;
}
