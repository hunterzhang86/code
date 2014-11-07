#include <stdio.h>

char *MyReverse(char *str)
{
    char *t1,*t2,temp;
    t1=str;
    t2=str;
    while(*t1!='\0')
    {
        t1++;
    }
    t1--;
    while(t2<t1)
    {
        temp=*t1;
        *t1=*t2;
        *t2=temp;
        t1--;
        t2++;
    }
    return str;
}

char *link(char *str1,char *str2)
{
    char *tmp;
    tmp=str1;
    while(*str1!='\0')
        str1++;
    while(*str2!='\0')
    {
        *(str1++)=*(str2++);
    }
    *str1='\0';
    return tmp;
}

int main()
{
    char str1[20],str2[20],tmp[20];
    int i;

    printf("Input String1:\n");
    gets(str1);
    printf("Input String2:\n");
    gets(str2);

    for(i=0;i<20;i++)   //不要在原来的数组中逆置，新建立一个数组保存它
        tmp[i]=str1[i];

    printf("String1 after reverse\n");
    puts(MyReverse(tmp));

    printf("String1 String2 after link\n");
    puts(link(str1,str2));

    return 0;
}
