#include "stdio.h"
#include "stdlib.h"
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
	struct score student[4],a[4];
	freopen("structex.in","r",stdin);	//ʹ���ļ����룬�Ͳ����ֶ�������
	for(i=0;i<4;i++)
	{
		printf("����ѧ������Ϣ\n");
	scanf("%d%s%d%d%d%d",&student[i].num,&student[i].name,
    &student[i].pro[0],&student[i].pro[1],&student[i].pro[2],&student[i].sum);
	}
	for(i=0;i<4;i++)
	{
	student[i].sum=student[i].pro[0]+student[i].pro[1]+student[i].pro[2];
	}
	for(i=1;i<4;i++)
	{
			for(j=0;j<4;j++)
			{
				if(student[j].sum<student[j+1].sum)
				{	a[j]=student[j];
				student[j]=student[j+1];
				student[j+1]=a[j];}
			}
	}
	for(i=0;i<4;i++)
	{
		printf("ѧ��:%d ����:%s ��һ�ųɼ�:%d �ڶ��ųɼ�:%d �����ųɼ�:%d �ܳɼ�:%d\n\n",student[i].num,student[i].name,student[i].pro[0],student[i].pro[1],student[i].pro[2],student[i].sum);
	}
	system("pause");
	getch();
	}


		
		




