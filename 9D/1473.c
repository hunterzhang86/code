#include <stdio.h>
#include <string.h>

int main()
{
    freopen("1473.in","r",stdin);
    int T;
    int i,j;
    int num[1000];
    char str[100];
    scanf("%d",&T);
    for(i=0;i<T;i++)
        scanf("%d",&num[i]);
    for(i=0;i<T;i++)
    {
        j=0;
        while(num[i]!=0)
        {
            str[j++]=num[i]%2+48;
            num[i]=num[i]/2;
        }
        while(j--)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
    
}
