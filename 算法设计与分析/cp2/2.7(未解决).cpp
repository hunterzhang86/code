#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void mergeSort(int a[]);
void mergePass(int x[],int y[],int s);
void merge(int c[],int d[],int l,int m,int r);

void mergeSort(int a[],int n)
{
	//int b[sizeof(a)/sizeof(a[0])];
	int b[10];
	cout<<sizeof(a)/sizeof(a[0])<<endl;
	int s=1;
	while(s<sizeof(a)/sizeof(a[0])){
		mergePass(a,b,s);
		s+=s;
		mergePass(b,a,s);
		s+=s;
	}
}

void mergePass(int x[],int y[],int s)
{
	int i=0;
	while(i<=sizeof(x)/sizeof(x[0])-2*s)
	{
		merge(x,y,i,i+s-1,i+2*s-1);
		i=i+2*s;
	}
	if(i+s<sizeof(x)/sizeof(x[0]))
		merge(x,y,i,i+s-1,sizeof(x)/sizeof(x[0])-1);
	else if(i>=0&&i<sizeof(x)/sizeof(x[0]))
		for(int j=i;j<sizeof(x)/sizeof(x[0]);j++)
			y[j]=x[j];
}

void merge(int c[],int d[],int l,int m,int r)
{
	int i=l,j=m+l,k=l;
	while((i<=m)&&(j<=r))
		if(c[i]<=c[j])
			d[k++]=c[i++];
		else	
			d[k++]=c[j++];
	if(i>m)
		for(int q=j;q<=r;q++)
			d[k++]=c[q];
	else
		for(int q=i;q<=m;q++)
			d[k++]=c[q];
}

int main()
{
	/*ifstream fin("hebing.dat");
	int v[10];
	int i=0,j=0;
	while(!fin.eof())
	{
		int temp;
		fin>>temp;
		v[i]=temp;
		i++;
	}*/
	int i;
	int v[10]={12,25,68,95,32,14,16,75,87,41};
	//cout<<sizeof(v)/sizeof(v[0])<<endl;
	for(i=0;i<10;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	mergeSort(v,10);
	for(i=0;i<10;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
	
}
