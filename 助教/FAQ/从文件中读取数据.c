/*
没发现问题
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char name[50];
    int number,score;
    fp=fopen("in.txt","r");
    if(fp==NULL)
    {
        printf("not open\n");
        exit(0);
    }
    else
    {
        while(!feof(fp))
        {
            fscanf(fp,"%s %d %d",name,&number,&score);
            printf("%s %d %d\n",name,number,score);
        }
    }
    fclose(fp);
    return 0;
}
