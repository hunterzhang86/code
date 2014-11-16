#include <iostream>
#include <fstream>
using namespace std;

int MinInOrder(int *num, int start, int end)
{
	if(num==NULL || start<0 || end<0 || start>end)
		return 0;	//这个返回0不是太对，不过为了AC只能这样做

	int min=num[start];
	for(int i=start;i<=end;i++)
	{
		if(num[i]<min)
			min=num[i];
	}
	
	return min;
}


int reverseMin(int *num,int length)
{
	if(num==NULL || length<=0)
		return 0;	//这个返回0不是太对，不过为了AC只能这样做

	int index1=0;
	int index2=length-1;
	int indexMid=index1;
	while(num[index1]>=num[index2])
	{
		if(index2-index1==1)
		{
			indexMid=index2;
			break;
		}

		indexMid=(index1+index2)/2;

		if(num[indexMid]==num[index1] && num[index1]==num[index2])
			return MinInOrder(num,index1,index2);

		if(num[indexMid]>=num[index1])
			index1=indexMid;
		else if(num[indexMid]<=num[index2])
			index2=indexMid;
	}

	return num[indexMid];

}

int num[1000001];

int main()
{
	freopen("1386.in","r",stdin);
	int length;
	while(scanf("%d",&length)!=EOF)
	{
		for(int i=0;i<length;i++)
			scanf("%d",&num[i]);
		cout<<reverseMin(num,length)<<endl;
	}
	return 0;
}