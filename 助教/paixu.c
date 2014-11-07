#include <stdio.h>
#include <string.h>
#include <malloc.h>

void sort(char *words[],int n);

int main()
{
    char *wString[]={"zhanghuan","liuyin","liuyan","huwei","zhongfang"};
    int i,n=5;
    char *temp={"hunter"},*temp1={"hunter1"};
    strcpy(&temp,&temp1);
    puts(temp);
    printf("The words are :\n");
    for(i=0;i<n;i++)
        printf("\twString[%d]=%s\n",i,wString[i]);
    printf("After sort,The words are\n");
    sort(wString,n);
    for(i=0;i<n;i++)
        printf("\twString[%d]=%s\n",i,wString[i]);
    return 0;

}

void sort(char *words[],int n)
{
    char *temp=(char *)malloc(20*sizeof(char));
    //temp=words[0];
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
            if(strcmp(words[k],words[j])>0) //与后面最小的字符串交换
            {
                k=j;
                //break;
            }
        if(k!=i)
        {
            strcpy(&temp,&words[i]);
            strcpy(&words[i],&words[k]);
            strcpy(&words[k],&temp);
        }
    }
}

