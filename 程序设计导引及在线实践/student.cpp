/*将一个Student结构数组先按照绩点从小到大排序输出，再按照姓名字典排序输出*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUM 4
struct Student{
	unsigned ID;
	char szName[20];
	double fGPA;
};
Student MyClass[NUM]={
	{1234,"TOM",3.78},
	{1238,"Jack",3.25},
	{1232,"Mary",4.00},
	{1237,"Jone",2.78}
};

int CompareID(const void *elem1,const void *elem2)
{
	Student *ps1=(Student *)elem1;
	Student *ps2=(Student *)elem2;
	return ps1->ID-ps2->ID;
}


int CompareName(const void *elem1,const void *elem2)
{
	Student *ps1=(Student *)elem1;
	Student *ps2=(Student *)elem2;
	return strcmp(ps1->szName,ps2->szName);
}

int main()
{
	int i;
	qsort(MyClass,NUM,sizeof(Student),CompareID);
	for(i=0;i<NUM;i++)
		printf("%s\n",MyClass[i].szName);
	printf("\n");
	qsort(MyClass,NUM,sizeof(Student),CompareName);
	for(i=0;i<NUM;i++)
		printf("%s\n",MyClass[i].szName);
	return 0;
};