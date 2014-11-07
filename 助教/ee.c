#include <stdio.h>

main()
{int a[17],n=17,i,j,k,l;
for (i=0;i<n;i++)
    a[i]=i;
printf("\n");
for (i=0;i<n;i++)
printf("%3d",a[i]);
printf("\n");
j=0;k=1;
while (n>1)
  {j=(j+1)%n;
   k++;
   if (k==3)
      {k=1;
       for (i=j;i<n;i++)
     {a[i]=a[i+1];}
       n=n-1;
       for (i=0;i<n;i++)
       printf("%3d",a[i]);
       printf("\n");}
       }
printf("%d",a[0]);

}

