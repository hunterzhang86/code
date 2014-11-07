#include <stdio.h>
#include <string.h>

int main()
{
    freopen("1062.in","r",stdin);
    int n;
    char ch[1000],tmp;
    scanf("%d",&n);
    scanf("%c",&tmp);
    while(n--)
    {
        gets(ch);
        int i,j,temp=0;
        for(i=0;i<strlen(ch)+1;i++)
        {
            if(ch[i]==' ')
            {
                for(j=i-1;j>=temp;--j)
                    printf("%c",ch[j]);
                printf(" ");
                temp=i+1;
            }
            if(ch[i]=='\0')
            {
                for(j=i-1;j>=temp;j--)
                    printf("%c",ch[j]);
                printf("\n");
            }
        }
    }
    return 0;
}

