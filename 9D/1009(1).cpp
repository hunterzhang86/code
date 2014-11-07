#include <iostream>
#include <fstream>
#include <cstring>
#define N 21
using namespace std;

void init(char str[],int num[])
{
    int i,j,tmp;
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        tmp=str[i]-'0';
        for(j=1;j<1024;)
        {
            if(num[j]==-1)
            {
                num[j]=tmp;
                break;
            }
            else if(tmp<num[j])
                j=2*j;
            else if(tmp>num[j])
                j=2*j+1;
        }
    }
}

void judge(int a[],int b[])
{
    int i,flag=1;

    for(i=0;i<1024;i++)
        if(a[i]!=b[i])
        {
            flag=0;
            break;
        }
    if(flag==1)
        printf("YES\n");
    else if(flag==0)
        printf("NO\n");

}

int main()
{
    freopen("1009.in","r",stdin);
    int a[1024],b[1024],n,i;
    char tmp,str1[N],str2[N];
    while(scanf("%d",&n)!=EOF&&n!=0&&n>=1&&n<=20)
    {
        scanf("%c",&tmp);
        gets(str1);
        memset(a,-1,sizeof(int)*1024);
        init(str1,a);
        while(n--)
        {
            gets(str2);
            memset(b,-1,sizeof(int)*1024);
            init(str2,b);
            judge(a,b);
        }
    }
    return 0;
}
