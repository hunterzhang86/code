#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <ctime>
#include <time.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
	freopen("main.in","r",stdin);
	freopen("main.out","w",stdout);

	int st=clock();
	printf("%d\n",1+2);
	printf("%d\n",3-4);
	printf("%d\n",5*6);
	printf("%d\n",8/4);
	printf("%d\n",8/5);

	cout<<endl;

	printf("%.1lf\n",8.0/5.0);
	printf("%.2lf\n",8.0/5.0);
	printf("%.4f\n",8.0/5.0);
	printf("%.1lf\n",8/5);
	printf("%lf\n",8/5);
	printf("%d\n",8.0/5.0);

	cout<<endl;

	printf("%.8lf\n",1+2*sqrt(3)/(5-0.1));
	printf("%.8lf\n",sqrt(9.1));

	cout<<endl;

	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a+b);

	const double PI=4.0*atan(1.0);
	double r,h,s1,s2,s;
	scanf("%lf%lf",&r,&h);
	s1=PI*r*r;
	s2=2*PI*r*h;
	s=2.0*s1+s2;
	printf("Area=%.3lf\n",s);

	cout<<endl;
	printf("%dms\n",clock()-st);
	return 0;
}

