#include <stdio.h>

int fg[400000];
int len=0;

void judge(int num)
{
    int i=len;
    while(num!=1)
    {
        if(num%2==0)
        {
            num=num/2;
            fg[i++]=num;
        }
        else
        {
            num=(num*3+1)/2;
            fg[i++]=num;
        }
    }
    len=i;
}

int main()
{
    freopen("1033.in","r",stdin);
    int n;
    int i,j,k;
    int flag;
    int a[500];
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        len=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            judge(a[i]);
        }

        for(i=n-1;i>=0;i--)
        {
            flag=1;
            for(j=0;j<len;j++)
                if(fg[j]==a[i])
                {
                    flag=0;
                    break;
                }
            if(flag==1)
                printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
