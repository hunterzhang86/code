#include <limits.h>
#include <stdio.h>
#include <malloc.h>
#define NOT_EXIST -1

using namespace std;

int* readData(char *fileName,int *n){
	FILE *fp=fopen(fileName,"r");
	if(fp==NULL){
		printf("can't open %s\n",fileName);
		return NULL;
	}
	int t,i=1;
	if(1!=fscanf(fp,"%d",n)){
		printf("read file error!");
		return NULL;
	}
	int m=*n;
	int *a=(int *)malloc((m+2)*sizeof(int));
	while(m-->0&&1==fscanf(fp,"%d",&t))
		a[i++]=t;
	return a;
}
/*
x[i]:待求数组，收尾为空,即i为[0，n+1],x[1]~x[n]存放原始数据
l[j]:表示若x[j+1]属于最长有序子序列中的一个元素，则x[1]~x[j]的最长有序子序列的长度
z[j]:表示若x[j+1]属于最长有序子序列中的一个元素，则x[1]~x[j]的某一最长有序子序列的最后一个元素的下标，为NOT_EXIST时表示不存在
*/
int longest_subs(int *x,int n){
	if(n<1){
		printf("the array length is less than 1");
		return 1;
	}
	/*为了方便处理，将x的首位分别置为INT_MIN,INT_MAX*/
	x[0]=INT_MIN;
	x[n+1]=INT_MAX;
	int *l,*y,*z;
	if((l=(int *)malloc((n+1)*sizeof(int)))==NULL||(y=(int *)malloc((n+1)*sizeof(int)))==NULL||(z=(int *)malloc((n+1)*sizeof(int)))==NULL){
		printf("malloc error!");
		return 1;
	}
	int i,j;
	l[0]=0;
	for(j=1;j<=n;j++)
		l[j]=INT_MIN;
	for(j=1;j<=n;j++){
		int t=j,max=INT_MIN,hold=x[j+1];
		i=0;
		/*若x[j+1]为最长有序子序列的一个元素，求出x[1]~x[j]的所有可能的最长子序列的最后一个元素的下标*/
		while(t>0){
			if(x[t]>max&&x[t]<hold){
				y[i++]=t;
				max=x[t];
			}
			t--;
		}
		if(i==0){
			l[j]=0;
			z[j]=NOT_EXIST;
		}
		/*迭代找出最长子序列所对应的最后一个元素下标*/
		while(--i>=0){
			if(l[j]<1+l[y[i]-1]){
				l[j]=1+l[y[i]-1];
				z[j]=y[i];
			}
		}
	}
	i=n;
	printf("the reverse order is :\n");
	while(i>0){
		if(i==z[i]){
			printf("%d\n",x[i]);
			i--;
		}
		else if(z[i]!=NOT_EXIST)
		{
			printf("%d\n",x[z[i]]);
			i=z[i]-1;
		}
		else
		{
			break;
		}
	}
}

int main(){
	int n;
	int *x=readData("longest_subs.in",&n);
	if(x==NULL)
		return 1;
	longest_subs(x,n);
	return 0;
}
