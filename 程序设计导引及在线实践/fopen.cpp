/*文件的输入与输出*/

#include <stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("D:\\students.txt","r");
	if(fp==NULL){
		printf("Failed to open the file.");
	  return 0;
	}
	char szName[30],szGender[30];
	int nId,nBirthYear,nBirthMonth,nBirthDay;
	float fGPA;
	while(fscanf(fp,"%s %d %s %d %d %d %f",szName,&nId,szGender,&nBirthYear,
		&nBirthMonth,&nBirthDay,&fGPA)!=EOF){
			printf("%s %d %s %d %d %d %f\r\n",szName,nId,szGender,nBirthYear,
			nBirthMonth,nBirthDay,fGPA);
	}
	fclose(fp);
	getchar();
	return 0;
	
}
