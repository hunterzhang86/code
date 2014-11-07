#include<iostream>
#include<time.h>
#define m 5000
using namespace std;


void swap(int &a,int &b)//交换数组元素
{
	int temp=a;
	a=b;
	b=temp;
}

void Heap_Adjust(int *a,int low,int high)
{
	int i;
	a[0]=a[low];
	for(i=2*low;i<=high;i*=2)
		{
			if(i<high && a[i]<a[i+1])
				i++;
			if(a[0]>=a[i])
				break;
			else 
			{
				a[low]=a[i];
				low=i;
			}
		a[low]=a[0];
		}
}

void Heap_Sort(int *a,int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		Heap_Adjust(a,i,n);
	for(i=n;i>=2;i--)
	{
		swap(a[1],a[i]);
		 Heap_Adjust(a,1,i-1);
	}
}


void Bin_Sort(int *a,int n)
{
	int i,j,low,mid,high;
	for(i=2;i<=n;i++)
		if(a[i]<a[i-1])
		{
			a[0]=a[i];
			low=1;
			high=i-1;
			while(low<=high)
			{
				mid=(low+high)/2;
				if(a[mid]>a[0])
					high=mid-1;
				else 
					low=mid+1;
			}
			for(j=i-1;j>high;j--)
				a[j+1]=a[j];
			a[high+1]=a[0];
		}
}

void Selection_Sort(int *a,int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=i;
		for(j=i+1;j<=n;j++)
			if(a[k]>a[j])
				k=j;
		if(k!=i)	
			swap(a[k],a[i]);
	}
}

void Bubble_Sort(int *a,int n)
{
	int i;
	bool change=true;
	while(change)
	{
		change=false;
		for(i=1;i<n;i++)
			if(a[i]>a[i+1])
			{
				change=true;
				swap(a[i],a[i+1]);
			}
	}
}

void Quick_Sort(int a[],int low,int high)
{
	int i=low,j=high;
	a[0]=a[low];
	while(low<high)
	{
		while(low<high && a[high]>=a[0])
			high--;
			swap(a[low],a[high]);
		while(low<high && a[low]<=a[0])
			low++;
			swap(a[low],a[high]);
	}
	a[low]=a[0];
	if(i!=low)
		Quick_Sort(a,i,low-1);
	if(j!=high)
		Quick_Sort(a,high+1,j);
}

void Group_Sort(int a[],bool flag[],int low,int high,int max,int min)
{
	int j,k,man,max1[m+1],min1[m+1],c[m+1],b[m+1];
	for(int i=0;i<=m;i++)
	{
		b[i]=0;
		c[i]=0;
		max1[i]=min;
		min1[i]=max;
	}
	man=max-min;
	for(i=low;i<high;i++)
	{
		flag[i]=false;
		j=(a[i]-min)*m/man;
		b[j]++;
		if(max1[j]<a[i])	max1[j]=a[i];
		if(min1[j]>a[i])	min1[j]=a[i];
		c[0]=low;
		for(i=1;i<=m;i++)
		{
			c[i]=c[i-1]+b[i-1];
		}
		i=low;
		while(i<high)
		{
			if(flag[i])	i++;
			else
			{
				j=(a[i]-min)*m/man;
				if(c[j]==i)
				{
					c[j]++;
					i++;
				}
				else
				{
					k=a[i];
					a[i]=a[c[j]];
					a[c[j]]=k;
					flag[c[j]]=true;
					c[j]++;
				}
			}
		}
		for(i=m;i>=1;i--)
		{
			c[i]=c[i-1];
		}	
		c[0]=low;
		for(i=0;i<m;i++)
		{
			if(b[i]<=m)
			{
				Quick_Sort(a,c[i],c[i+1]-1);
			}
			else
			{
				Group_Sort(a,flag,c[i],c[i+1]-1,max1[i],min1[i]);
			}
		}
	}
	
}

int findMax(int a[],int length)
{
	int max=-1000000;
	for(int i=1;i<=length;i++)
		if(max<a[i])
			max=a[i];
	return max;
}

int findMin(int a[],int length)
{
	int min=1000000;
	for(int i=1;i<=length;i++)
		if(min>a[i])
			min=a[i];
	return min;
}


void Out(int *a,int n)
{
	int i;
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void randInt(int num[])
{
	for(int i=1;i<=m;i++)
	{
		num[i]=rand()%1000;
	}
}

int main()
{
	freopen("cp1.out","w",stdout);

	srand((unsigned)time(NULL));
	int *num=new int[m+1];
	bool flag[m+1];
	memset(num,0,sizeof(int)*(m+1));
	
	randInt(num);

	for(int i=1;i<=m;i++)
	{
		flag[i]=false;
	}

	cout<<"分组排序前："<<endl;	
//	Out(num,m);
	//Quick_Sort(num,1,m);
	//printf("max:%d\n",findMax(num,m));
	//printf("min:%d\n",findMin(num,m));
	int max=0,min=0;
	max=findMax(num,m);
	min=findMin(num,m);
//	clock_t start=clock();
	int st0=clock();
	Group_Sort(num,flag,1,m+1,max,min);
	printf("%dms\n",clock()-st0);
//	clock_t end=clock();
//	float time=(float)(end-start)/CLOCKS_PER_SEC;
//	printf("%f\n",time);
	cout<<"排序后："<<endl;
//	Out(num,m);


	randInt(num);
	cout<<"堆排序前："<<endl;	
//	Out(num,m);
	int st1=clock();
	Heap_Sort(num,m);
	printf("%dms\n",clock()-st1);
//	clock_t end1=clock();
//	float time1=(float)(end1-start1)/CLOCKS_PER_SEC;
	cout<<"排序后："<<endl;
//	Out(num,m);

	cout<<endl;

	randInt(num);
	cout<<"二分插入排序前："<<endl;	
//	Out(num,m);
	int st2=clock();
	Bin_Sort(num,m);
	printf("%dms\n",clock()-st2);
	cout<<"排序后："<<endl;
//	Out(num,m);


	cout<<endl;

	randInt(num);
	cout<<"选择排序前："<<endl;	
//	Out(num,m);
	int st3=clock();
	Selection_Sort(num,m);
	printf("%dms\n",clock()-st3);
	cout<<"排序后："<<endl;
//	Out(num,m);

	cout<<endl;

	randInt(num);	
	cout<<"冒泡排序前："<<endl;	
//	Out(num,m);
	int st4=clock();
	Bubble_Sort(num,m);
	printf("%dms\n",clock()-st4);
	cout<<"排序后："<<endl;
//	Out(num,m);

	return 0;
}





