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

    printf("������ʮ��������\n");
    scanf("%d",&num10);

    printf("��Ӧ�Ķ�������Ϊ��\n");
    zhuan2(num10);
    printf("\n");

    printf("��Ӧ�İ˽�����Ϊ��\n");
    zhuan8(num10);
    printf("\n");

    printf("��Ӧ��ʮ��������Ϊ��\n");
    zhuan16(num10);
    printf("\n");

    return 0;
}
