/*合并排序递归版*/

#include <stdio.h>
#include <iostream>
#include <fstream>
#define NUM 10000
using namespace std;

void mergesort(int *num,int start,int end);
void merge(int *num,int start,int middle,int end);

int main()
{
	//最初的测试数据
	/*int num[10]={12,54,23,67,86,45,97,32,14,65};
	int i;
	printf("Before sorting:\n");
	for(i=0;i<10;i++)
		printf("%3d",num[i]);
	cout<<endl;
	mergesort(num,0,9);
	printf("After sorting:\n");
	for(i=0;i<10;i++)
		printf("%3d",num[i]);
	cout<<endl;
	return 0;*/

	ifstream fin("hebing.dat");
	int num[NUM];
	int numLength;
	fin>>numLength;	
	int i=0;
	while(!fin.eof()&&i<10000)
	{
		int temp;
		fin>>temp;
		num[i]=temp;
		i++;
	}
	printf("Before sorting:\n");
	for(i=0;i<numLength;i++)
		cout<<num[i]<<" ";
	cout<<endl;
	mergesort(num,0,numLength-1);
	printf("After sorting:\n");
	for(i=0;i<numLength;i++)
		cout<<num[i]<<" ";
	cout<<endl;
	getchar();
	return 0;
	
}

void mergesort(int *num,int start,int end)
{
	int middle;
	if(start<end)
	{
		middle=(start+end)/2;
		mergesort(num,start,middle);
		mergesort(num,middle+1,end);
		merge(num,start,middle,end);
	}
}

void merge(int *num,int start,int middle,int end)
{
	int n1=middle-start+1;
	int n2=end-middle;
	int *L=new int[n1+1];
	int *R=new int[n2+1];
	int i,j=0,k;
	for(i=0;i<n1;i++)
	{
		*(L+i)=*(num+start+i);
	}
	*(L+n1)=1000000;
	for(i=0;i<n2;i++)
	{
		*(R+i)=*(num+middle+i+1);
	}
	*(R+n2)=1000000;	//哨兵
	i=0;
	for(k=start;k<=end;k++)
	{
		if(L[i]<=R[j])
		{
			num[k]=L[i];
			i++;
		}
		else
		{
			num[k]=R[j];
			j++;
		}
	}
	delete [] L;
	delete [] R;
}