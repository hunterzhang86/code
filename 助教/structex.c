#include <stdio.h>

struct stu	
{
	int num;
	char name[12];
	int score[3];
	int sum;
};

int main()
{
	struct stu stu[4];
	int i,j;
	freopen("structex.in","r",stdin);	//ʹ���ļ����룬�Ͳ����ֶ�������
	for(i=0;i<4;i++)	//����
		scanf("%d %s %d %d %d %d",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].sum);
	for(i=0;i<4;i++)
		stu[i].sum=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
	for(i=1;i<4;i++)	//ð������
		for(j=0;j<4-i;j++)
			if(stu[j].sum<stu[j+1].sum)
			{
				struct stu tmp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=tmp;
			}
	for(i=0;i<4;i++)	//���
		printf("%2d  %12s  %2d  %2d  %2d  %3d\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].sum);
	return 0;
}