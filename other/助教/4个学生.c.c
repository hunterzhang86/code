#include "stdio.h"
#include "stdlib.h"
#define N 10

struct score
{
	int num;
	char name[20];
	int pro[3];
	int sum;
};
main()
{
	int i,j;
	struct score student[N],a[N];
	freopen("structex.in","r",stdin);	//使用文件输入，就不用手动输入了
	for(i=0;i<N;i++)
	{
		printf("请输学生的信息\n");
	scanf("%d%s%d%d%d%d",&student[i].num,&student[i].name,
    &student[i].pro[0],&student[i].pro[1],&student[i].pro[2],&student[i].sum);
	}
	for(i=0;i<N;i++)
	{
	student[i].sum=student[i].pro[0]+student[i].pro[1]+student[i].pro[2];
	}
	for(i=1;i<N;i++)
	{
			for(j=0;j<N-i;j++)	//为什么不能是j<4，这和上面不能是0到3的原因是一样的，这样会造成student[j+1]越界
			{
				if(student[j].sum<student[j+1].sum)
				{	a[j]=student[j];
				student[j]=student[j+1];
				student[j+1]=a[j];}
			}
	}
	for(i=N-1;i>=0;i--)
	{
		printf("学号:%d 姓名:%s 第一门成绩:%d 第二门成绩:%d 第三门成绩:%d 总成绩:%d\n\n",student[i].num,student[i].name,student[i].pro[0],student[i].pro[1],student[i].pro[2],student[i].sum);
	}
}








