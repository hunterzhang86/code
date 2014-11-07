#include <stdio.h>
#include <string.h>
#define N1 5
#define N2 80

int main()
{
    freopen("1021.in","r",stdin);
    char str_1[N1],str_2[N2];
    int i,j,count[N1];
    while(gets(str_1)!=0&&strcmp(str_1,"#")!=0)
    {
        gets(str_2);
        for(i=0;i<strlen(str_1);i++)
        {
            count[i]=0;
            for(j=0;j<strlen(str_2);j++)
                if(str_1[i]==str_2[j])
                    count[i]++;
        }
        for(i=0;i<strlen(str_1);i++)
            printf("%c %d\n",str_1[i],count[i]);
    }
    return 0;
}
