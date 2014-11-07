#include <stdio.h>
#include <string.h>

int main()
{
    freopen("1049.in","r",stdin);
    char str[1000];
    int i,j,len;
    char ch,tmp;
    while(gets(str))
    {
        scanf("%c",&ch);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]==ch)
            {
                for(j=i;j<len;j++)
                    str[j]=str[j+1];
                len--;
            }
        }
        for(i=0;i<len;i++)
            printf("%c",str[i]);
        printf("\n");
        scanf("%c",&tmp);
    }


    return 0;
}

