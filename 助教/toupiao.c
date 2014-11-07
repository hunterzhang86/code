#include <stdio.h>
#include <string.h>

struct student
{
	char name[12];
	int count;
};

int main()
{
	struct student stu[4]={"zhang",0,"liu",0,"huang",0,"zhu",0};
	int i,j;
	freopen("toupiao.in","r",stdin);
	for(i=0;i<10;i++)
	{
		char tmp[12];
		gets(tmp);
		for(j=0;j<4;j++)
			if(!strcmp(tmp,stu[j].name))
				stu[j].count++;
	}
	for(i=0;i<4;i++)
		printf("%s : %d\n",stu[i].name,stu[i].count);
}

