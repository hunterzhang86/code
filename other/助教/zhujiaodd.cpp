#include<stdio.h>
void sp(char *x,int n)
{int i,j;
// char p[20];

 for(i=0;*x!='\0';i++)
 {printf("%c",*(x++));
  for(j=1;j<=n;j++)
  {printf(" ");}
 }
 //return x;
}
main()
{char a[20];int space;
 gets(a);
 printf("input space number:\n");
 scanf("%d",&space);
 sp(a,space);
}
