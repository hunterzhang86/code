// 找出数组的最大值和次大值，a是待查找的数组，left和right是查找区间，max和second存放结果
#include <iostream>
#include <fstream>
#include <string>
#define N 10
using namespace std;

void MaxandMin(int a[], int left, int right, int &max, int &second)
{
    if(left == right)
    {
        max = a[left] ;
        second =  INT_MIN;
    }
    else if(left +1== right)
    {
        max = a[left] > a[right] ? a[left] : a[right] ;
        second = a[left] < a[right] ? a[left] : a[right] ;
    }
    else
    {
        int mid = left + (right - left) /2 ;

        int leftmax ;
        int leftsecond ;
        MaxandMin(a, left, mid, leftmax, leftsecond) ;

        int rightmax ;
        int rightsecond ;
        MaxandMin(a, mid +1, right, rightmax, rightsecond) ;

        if (leftmax > rightmax)
        {
            max = leftmax ;
            second = leftsecond > rightmax ? leftsecond : rightmax ;
        }
        else
        {
            max = rightmax ;
            second = leftmax < rightsecond ? rightsecond : leftmax ;
        }
    }
}

int main()
{
	int num[N],i;
	int max,second;
	ifstream cin("aaa.txt");
	for(i=0;i<N;i++)
		cin>>num[i];	//不需要用&了
	MaxandMin(num, 0, N-1, max, second);
	for(i=0;i<N;i++)
		cout<<num[i]<<" ";
	cout<<endl;
	cout<<max<<" "<<second<<endl;
	return 0;
}