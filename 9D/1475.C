#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 1000

char tcp[N],length[5],source[4][3],des[4][3],source_port[5],des_port[5];

int to_10(char num[])
{
    double sum=0;
    int i,j;
    for(i=strlen(num)-1,j=0;i>=0;i--,j++)
        if(num[i]>=48&&num[i]<=57)
            sum=sum+(num[i]-48)*pow(16,j);
        else if(num[i]>=97&&num[i]<=102)
            sum=sum+(num[i]-87)*pow(16,j);
    return sum;
}

void read()
{
    int count=N,i=0;
    char tmp;
    while(count--)
    {
        scanf("%c",&tmp);
        if(tmp==' ')
            continue;
        else if(tmp=='\n')
        {
            tcp[i]='\0';
                return;
        }
        tcp[i++]=tmp;
    }
    tcp[i]='\0';
}

void output()
{
    printf("Total length = %d bytes\n",to_10(length));
    printf("Source = %d.%d.%d.%d\n",to_10(source[0]),to_10(source[1]),to_10(source[2]),to_10(source[3]));
    printf("Destination = %d.%d.%d.%d\n",to_10(des[0]),to_10(des[1]),to_10(des[2]),to_10(des[3]));
    printf("Source Port = %d\n",to_10(source_port));
    printf("Destination Port = %d\n",to_10(des_port));
    printf("\n");
}

void test()
{

    int n,j=0,k=0,x=0,len=0,len_case=0;
    char tmp;
    scanf("%d",&n);
    scanf("%c",&tmp);
    while(len_case<n)
    {
        read();
        if(tcp[1]>=48&&tcp[1]<=57)
            len=tcp[1]-48;
        else if(tcp[1]>=97&&tcp[1]<=102)
            len=tcp[1]-87;
        j=4;
        for(k=0;k<4;k++)
            length[k]=tcp[j++];
        length[4]='\0';
        j=24;
        for(k=0;k<4;k++)
        {
            for(x=0;x<2;x++)
                source[k][x]=tcp[j++];
            source[k][2]='\0';
        }
        j=32;
        for(k=0;k<4;k++)
        {
            for(x=0;x<2;x++)
                des[k][x]=tcp[j++];
            des[k][2]='\0';
        }
        j=len*4*2;
        for(k=0;k<4;k++)
            source_port[k]=tcp[j++];
        source_port[4]='\0';
        j=len*4*2+4;
        for(k=0;k<4;k++)
            des_port[k]=tcp[j++];
        des_port[4]='\0';
        printf("Case #%d\n",len_case+1);
        output();
        len_case++;
    }
}

int main()
{
    freopen("1475.in","r",stdin);
    test();
    return 0;
}
