#include<stdio.h>
#include<string.h>
#include<math.h>
int num[16];
int num_index[4]={2,0,1,2};
int min_times;
int n;
char num_str[16];
int getmin(int *tmp,int number,int index)
{
    int min_dis,min_index;
    int i,j;
    min_dis=300;
    min_index=-1;
    for(j=0;j<n;j++)
    {
        if(tmp[j]==number&&min_dis>abs(index-j))
        {
            min_dis=abs(index-j);
            min_index=j;
        }
    }
    if(min_index>index)
    {
        for(i=min_index;i>index;i--)
            tmp[i]=tmp[i-1];
    }
    else
    {
        for(i=min_index;i<index;i++)
            tmp[i]=tmp[i+1];
    }
    tmp[index]=-1;
    return min_dis;
}
void cacu(int head,int time_cost,unsigned char *chk,int *tmp)
{
    int tmp_cost;
    int tmpnum[16];
    int flag=1;
    int i;
    for(i=0;i<4;i++)
    {
        if(!chk[i])
        {
            flag=0;
            memcpy(tmpnum,tmp,sizeof(int)*n);
            tmp_cost=getmin(tmpnum,num_index[i],head+i);
            chk[i]=1;
            cacu(head,time_cost+tmp_cost,chk,tmpnum);
            chk[i]=0;
        }
    }
    if(flag&&time_cost<min_times)
    {
        min_times=time_cost;
    }
    return;
}
void count_times(void)
{
    int i;
    unsigned char chk[4];
    min_times=500;
    for(i=0;i<n;i++)
    {
        memset(chk,0,4);
        cacu(i,0,chk,num);
    }
    return;
}
int main()
{
    freopen("1482.in","r",stdin);
    int i;
    int count[3];
    while(scanf("%d %s",&n,num_str)!=EOF)
    {
        count[0]=count[1]=count[2]=0;
        for(i=0;i<n;i++)
        {
            num[i]=num_str[i]-'0';
            count[num[i]]++;
        }
        if(count[0]&&count[1]&&count[2]>=2)
        {
            count_times();
            printf("%d\n",min_times);
        }
        else
            printf("-1\n");
    }
    return 0;
}
