#include <stdio.h>
#include <string.h>
#define N 10000

char charm[N][22],fun[N][80];
int len=0;

void read()
{
    int i=0,j=0;
    for(i=0;i<N;i++,len++)
    {
        char tmp;
        for(j=0;j<22;j++)
        {
            scanf("%c",&tmp);
            if(tmp==']')
            {
                charm[i][j]=tmp;
                break;
            }
            else if(tmp=='\n')
                break;
            else
                charm[i][j]=tmp;
        }
        if(strcmp(charm[i],"@END@")==0)
            return;
        else
        {
            scanf("%d",&tmp);
            for(j=0;j<80;j++)
            {
                scanf("%d",&tmp);
                if(tmp=='\n')
                    break;
                else
                    fun[i][j]=tmp;
            }
        }
    }
    return;
}

void output()
{
    int i,j;
    printf("%d",len);
    for(i=0;i<=len;i++)
    {
        for(j=0;j<strlen(charm[i]);j++)
            printf("%c",charm[i][j]);
        printf(" ");
        for(j=0;j<strlen(fun[i]);j++)
            printf("%c",fun[i][j]);
        printf("\n");
    }
}


void judge()
{

}

int main()
{	char tmp;
    freopen("1029.in","r",stdin);
	
//	scanf("%c",&tmp);
//	printf("%c\n",tmp);
    read();
    output();
 //   judge();
    return 0;
}
