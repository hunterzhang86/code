#include <stdio.h>
#define N 10

void zhuan2(int num10)
{
    int i=0,tmp=num10;
    char num2[N];
    while(tmp)
    {
        num2[i++]=tmp%2+48;
        tmp=tmp/2;
    }
    while(i--)
        printf("%c",num2[i]);
}

void zhuan8(int num10)
{
    int i=0,tmp=num10;
    char num8[N];
    while(tmp)
    {
        num8[i++]=tmp%8+48;
        tmp=tmp/8;
    }
    while(i--)
        printf("%c",num8[i]);
}


void zhuan16(int num10)
{
    int i=0,tmp=num10;
    char num16[N];
    while(tmp)
    {
        (tmp%16>=10)?(num16[i++]=tmp%16+55):(num16[i++]=tmp%16+48);
        tmp=tmp/16;
    }
    while(i--)
        printf("%c",num16[i]);
}

int main()
{
    int num10,tmp=1,i=0;

    printf("请输入十进制数：\n");
    scanf("%d",&num10);

    printf("对应的二进制数为：\n");
    zhuan2(num10);
    printf("\n");

    printf("对应的八进制数为：\n");
    zhuan8(num10);
    printf("\n");

    printf("对应的十六进制数为：\n");
    zhuan16(num10);
    printf("\n");

    return 0;
}
