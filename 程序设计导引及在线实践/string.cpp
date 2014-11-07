#include <stdio.h>
#include <string.h>
int main(){
	char szTitle[]="Prison Break";
	char szHero[100]="Michael Scofield";
	char szPrisonName[100];
	char szResponse[100];
	printf("What's the name of the prison in %s?\n",szTitle);
	gets(szPrisonName);
	if(strcmp(szPrisonName,"Fox River")==0){
		printf("Yeah!Do you love %s?\n",szHero);
		}
		else{
			strcpy(szResponse,"It seems you haven't watched it!\n");
			printf(szResponse);
		}
		szTitle[0]='t';
		szTitle[3]=0;
		printf(szTitle);
		getchar();
		return 0;
	}
