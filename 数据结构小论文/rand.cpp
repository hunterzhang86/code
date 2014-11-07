/*#include <iostream>
#include <time.h>
#include <fstream>

using namespace std;

int fall(int mid,int level)
{
	int i,temp;
	temp=mid;
	if((rand()/10)%2==1)
	{
		if((rand()%2==1))	mid++;
		else	mid--;
	}
	for(i=0;i<level;i++)
		if(rand()/4%2==1)	mid++;
		else	mid--;
	return mid;
}

int main()
{
	long x,mid,level,i,count[101];
	time_t t;
	srand((unsigned)time(&t));
	ofstream fp;
	fp.open("d:\\test.txt");
	cout<<"请输入初值(平均值):";
	cin>>mid;
	cout<<endl;
	cout<<"请输入高尔顿版层数：";
	cin>>level;
	cout<<endl;
	for(i=0;i<101;i++)	count[i]=0;
	for(i=0;i<10000000;i++)
	{
		x=fall(mid,level);
		count[x]++;
	}
	fp<<endl;
	for(i=0;i<101;i++)	fp<<i<<" \t";
	fp.close();
	return 0;
}
*/


/*#include <iostream>
#include "stdlib.h"
using namespace std;

float nrand()
{
   int i;
   float sum=0;
   for(i=0;i<12;i++)
   {
      sum+=rand()/32768.0;
   }
	return(sum-6);
}
 

int main()
{
   int SEED;
   int i,j;
   SEED=109;//任意的0 < N < 32768
   srand(SEED);
   for(i=0;i<100;i++)
   {
      printf("%d  ",nrand() );
   }
   return 0;
}
*/

/*#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;
  
double gaussrand() 
{ 
    static double V1, V2, S; 
    static int phase = 0; 
    double X; 
      
    if ( phase == 0 ) { 
        do { 
            double U1 = (double)rand() / RAND_MAX; 
            double U2 = (double)rand() / RAND_MAX; 
              
            V1 = 2 * U1 - 1; 
            V2 = 2 * U2 - 1; 
            S = V1 * V1 + V2 * V2; 
        } while(S >= 1 || S == 0); 
          
        X = V1 * sqrt(-2 * log(S) / S); 
    } else
        X = V2 * sqrt(-2 * log(S) / S); 
          
    phase = 1 - phase; 
  
    return X; 
} 

int main()
{
	for(int i=0;i<100;i++)
		//printf("%.0f ",gaussrand()*10000+1000);
		printf("%d ",gaussrand()*10000+1000);
}
*/

#include <iostream>
#include <time.h> 
#include <stdlib.h> 
#include <math.h> 
using namespace std;

 


double randomUniform(double dMinValue,double dMaxValue)
{
    double pRandomValue = (double)(rand()/(double)RAND_MAX);
    pRandomValue = pRandomValue*(dMaxValue-dMinValue)+dMinValue;
    return pRandomValue;
}


int main()
{
	srand(time(NULL));
	for(int i=0;i<100;i++)
		//printf("%.0f ",gaussrand()*10000+1000);
		printf("%.0f ",randomUniform(-10000,10000));
}