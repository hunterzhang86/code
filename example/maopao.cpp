#include <iostream>
#include <fstream>
#define N 10

using namespace std;

void bubbleSort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
}

int main()
{
	ifstream cin("maopao.in");
	int i,a[N];
	for(i=0;i<N;i++)
		cin>>a[i];
	cout<<"befor sort"<<endl;
	for(i=0;i<N;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	bubbleSort(a,N);
	cout<<"after sort"<<endl;
	for(i=0;i<N;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}