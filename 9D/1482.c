#include <stdio.h>
#include <string.h>
#define N 14

void reverse (char * str)
{
    char *t1,*t2,temp;
    t1= str;
    t2= str;
    while(*t1!='\0' )
    {
        t1++;
    }
    t1--;
    while(t2<t1)
    {
        temp=*t1;
        * t1=* t2;
        * t2= temp;
        t1--;
        t2++;
    }
}


int main()
{
    freopen("1482.in","r",stdin);
    char num[N];
    int i,n,count1=0,count2=0,tmp,max=0,max1=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<2||n>13)
            continue;
        scanf("%c",&tmp);
        gets(num);
        i=0;
        while(i<=n)
        {
            if(num[i]=='2')
                break;
            else
            {
                ++count1;
                ++i;
        //        printf("%d\n",i);
            }
        }

        if((i-1)>=0&&num[i-1]=='0')
        {
            --count1;
        }
        else
        {
            while(num[i+1]!='0'&&i<=n)
            {
                ++count1;
                ++i;
            }
        }
        if((i-1)>=0&&num[i-1]=='1')
        {
            --count1;
        }
        else
        {
            while(num[i+1]!='1'&&i<=n)
            {
                ++count1;
                ++i;
          //      printf("%d\n",i);
            }
        }

        if((i-1)>=0&&num[i-1]=='2')
        {
            --count1;
        }
        else
        {
            while(num[i+1]!='2'&&i<=n)
            {
                ++count1;
                ++i;
            }
        }

        reverse(num);
    //    puts(num);
        i=0;
        count2=0;
        while(i<=n)
        {
            if(num[i]=='2')
                break;
            else
            {
                ++count2;
                ++i;
        //        printf("%d\n",i);
            }
        }


        if((i-1)>=0&&num[i-1]=='1')
        {
            --count2;
        }
        else
        {
            while(num[i+1]!='1'&&i<=n)
            {
                ++count2;
                ++i;
            }
        }
        if((i-1)>=0&&num[i-1]=='0')
        {
            --count2;
        }
        else
        {
            while(num[i+1]!='0'&&i<=n)
            {
                ++count2;
                ++i;
          //      printf("%d\n",i);
            }
        }

        if((i-1)>=0&&num[i-1]=='2')
        {
            --count2;
        }
        else
        {
            while(num[i+1]!='2'&&i<=n)
            {
                ++count2;
                ++i;
            }
        }
        if(i>n||i<0)
        {
            printf("-1\n");
            continue;
        }
        else
            printf("%d\n",(count1)<(count2)?(count1):(count2+1));
    }
    return 0;
}
