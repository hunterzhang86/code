#include <stdio.h>
#include <string.h>
#define N 10000
int main()
{

    char mozhou[N][22],fun[N+1][80],str[N][80],tmp;
    int i=0,j=0,k=0,sum=0,n;
	freopen("1029.in","r",stdin);
    while((sum++)<=1000){
        for(j=0;j<22;j++)
        {
            scanf("%c",&mozhou[i][j]);
            if(mozhou[i][j]==']')
                break;
            else if(mozhou[i][j]=='\n')
            {
                mozhou[i][j]='\0';
                break;
            }
        }
 //       puts(mozhou[i]);
 //       if(strcmp(mozhou[8],"@END@")==0)
//            printf("hello\n");
        if(strcmp(mozhou[i],"@END@")==0)
            break;
        scanf("%c",&tmp);
        gets(fun[i]);
   //     puts(mozhou[i]);
   //     puts(fun[i]);
        i++;
    }
    for(i=0;i<sum;i++)
    {
        printf("%s %s\n",mozhou[i],fun[i]);
    }

    /*
 //   strcpy(str,fun[i-1]);
  //  puts(fun[i-9]);
  //  n=fun[i]-48;
  //  printf("%d",tmp);
    scanf("%d",&n);
 //   printf("%d",n);
    for(i=0;i<n+2;i++)
    {
        gets(str[i]);
        puts(str[i]);
        for(j=0;j<sum;j++)
        {
            if(strcmp(mozhou[j],str[i])==0)
            {
                puts(fun[j]);
                break;
            }
            else if(strcmp(fun[j],str[i])==0)
            {
                for(k=0;k<23&&mozhou[j][k]!='\0';k++)
                {
                    printf("%c",mozhou[j][k]);
                    break;
                }
            }
        }
        if(j==sum-1)
        {
            printf("what?");
        }
    }
*/


    return 0;
}
