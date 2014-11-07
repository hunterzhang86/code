#include <stdio.h>
#include <limits.h>

int m[100][100],n[100][100];

void test();
int judge_min();
void output(int len_n);

void test()
{
    int len_m,len_n;
    int i,j;
    int min;
    while(scanf("%d",&len_m)!=EOF)
    {
        scanf("%d",&len_n);
        if(len_m<len_n||len_m<0||len_n<0)
            return;
        for(i=0;i<len_m;i++)
            for(j=0;j<len_m;j++)
                scanf("%d",&m[i][j]);
        min=judge_min(len_m,len_n);
        printf("%d\n",min);
    }

}
int judge_min(int len_m,int len_n)
{
    int sum;
    int min=INT_MAX;
    int i,j,p,q;
    for(p=0;p<len_m-len_n+1;p++)
        for(q=0;q<len_m-len_n+1;q++)
        {
            sum=0;
            for(i=0;i<len_n;i++)
                for(j=0;j<len_n;j++)
                {
                    n[i][j]=m[p+i][q+j];
                    sum=sum+n[i][j];
                }
            if(sum<min)
                min=sum;
            output(len_n);
        }

    return min;
}

void output(int len)
{
    int i,j;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    freopen("1492.in","r",stdin);
    test();
    return 0;
}
