#include <stdio.h>
#include <string.h>
#include <math.h>

char num[1000];

void test();
long shift(char a[],int len);
long Sum1s(long n);
long Sum2s(long n);

void test()
{
    long num_tmp;
    long sum;
    long count1,count2;
    scanf("%s",&num);
//    printf("%s",num);
    num_tmp=shift(num,strlen(num));
    count1=Sum1s(10);
    printf("%d\n",count1);
    count2=Sum2s(10);
    printf("%d\n",count2);
    sum=count1+count2;
    if(sum>=20123)
        printf("%ld\n",sum%20123);
    else
        printf("%ld\n",sum);
}

long shift(char a[],int len)
{
    int i;
    long tmp=0;
    for(i=0;i<len;i++)
        tmp=tmp+a[i]*(long)pow(10,len-i-1);
    printf("%ld\n",tmp);
    return tmp;
}

long Sum1s(long n)
{
    long iCount=0;
    long iFactor=1;
    long iLowerNum=0;
    long iCurrNum=0;
    long iHigherNum=0;

    while(n/iFactor!=0)
    {
        iLowerNum=n-(n/iFactor)*iFactor;
        iCurrNum=(n/iFactor)%10;
        iHigherNum=n/(iFactor*10);
        switch(iCurrNum)
        {
            case 0:
                iCount+=iHigherNum*iFactor;
                break;
            case 1:
                iCount+=iHigherNum*iFactor+iLowerNum+1;
                break;
            default:
                iCount+=(iHigherNum+1)*iFactor;
                break;

        }
        iFactor+=10;
    }

    return iCount;
}

long Sum2s(long n)
{
    long iCount=0;
    long iFactor=1;
    long iLowerNum=0;
    long iCurrNum=0;
    long iHigherNum=0;

    while(n/iFactor!=0)
    {
        iLowerNum=n-(n/iFactor)*iFactor;
        iCurrNum=(n/iFactor)%10;
        iHigherNum=n/(iFactor*10);
        switch(iCurrNum)
        {
            case 0:
                iCount+=iHigherNum*iFactor;
                break;
            case 1:
                iCount+=iHigherNum*iFactor;
                break;
            case 2:
                iCount+=iHigherNum*iFactor+iLowerNum+1;
                break;
            default:
                iCount+=(iHigherNum+1)*iFactor;
                break;

        }
        iFactor+=10;
    }

    return iCount;
}

int main()
{
    freopen("1491.in","r",stdin);
    test();
    return 0;
}
