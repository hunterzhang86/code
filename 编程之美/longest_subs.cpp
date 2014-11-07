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
x[i]:�������飬��βΪ��,��iΪ[0��n+1],x[1]~x[n]���ԭʼ����
l[j]:��ʾ��x[j+1]����������������е�һ��Ԫ�أ���x[1]~x[j]������������еĳ���
z[j]:��ʾ��x[j+1]����������������е�һ��Ԫ�أ���x[1]~x[j]��ĳһ����������е����һ��Ԫ�ص��±꣬ΪNOT_EXISTʱ��ʾ������
*/
int longest_subs(int *x,int n){
	if(n<1){
		printf("the array length is less than 1");
		return 1;
	}
	/*Ϊ�˷��㴦����x����λ�ֱ���ΪINT_MIN,INT_MAX*/
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
		/*��x[j+1]Ϊ����������е�һ��Ԫ�أ����x[1]~x[j]�����п��ܵ�������е����һ��Ԫ�ص��±�*/
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
		/*�����ҳ������������Ӧ�����һ��Ԫ���±�*/
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
