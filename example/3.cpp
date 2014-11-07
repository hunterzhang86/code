/*#include <stdio.h>
#include <iostream>
using namespace std;

void print_subset(int n,int *A,int cur)
{
	int i;
	for(i=0;i<cur;i++)	printf("%d ",A[i]);
	cout<<endl;
	int s=cur?A[cur-1]+1:0;
	for(i=s;i<n;i++)
	{
		A[cur]=i;
		print_subset(n,A,cur+1);
	}
}

int A[10];
int main()
{
	print_subset(5,A,0);
	return 0;
}



#include <iostream>
using namespace std;


void print_subset(int n,int* B,int cur){
	if(cur==n){
		for(int i=0;i<cur;i++)
			if(B[i])	printf("%d ",i);
		cout<<endl;
		return;
	}
	B[cur]=1;
	print_subset(n,B,cur+1);
	B[cur]=0;
	print_subset(n,B,cur+1);
}

int B[10];

int main()
{
	print_subset(5,B,0);
	return 0;

}

#include <iostream>
using namespace std;

void print_subset(int n,int s)
{
	for(int i=0;i<n;i++)
		if(s&(1<<i))	printf("%d ",i);
	cout<<endl;
}

int main()
{
	int n=5;
	for(int i=0;i<(1<<n);i++)
		print_subset(n,i);
	return 0;

}*/


#include <iostream>
using namespace std;

int C[50],tot=0,n,nc=0;
void search(int cur){
	int i,j;
	nc++;
	if(cur==n)	tot++;
	else for(i=0;i<n;i++){
		int ok=1;
		C[cur]=i;
		for(j=0;j<cur;j++)
			if(C[cur]==C[j]||cur-C[cur]==j-C[j]||cur+C[cur]==
	}
}