#include <stdio.h>
#include <iostream>
using namespace std;

void Bubble_Sort(int num[],int length)
{
    int i,j;
    for(i=0;i<length;i++)
        for(j=0;j<length-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int tmp;
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
            }
        }
}

//不能AC估计是太慢了
void Insertion_Sort( int a[],int n)
{
       int i, j;
       int tmp;
       for(i=1 ;i <n; i++)
             if(a[i]<a[i-1 ])
            {
                   tmp=a[i];
                   for(j=i-1 ;a [j ]>tmp;j--)
                         a[ j+ 1]=a[j];
                   a[ j+ 1]=tmp;
            }
}


int main()
{
    freopen("1040.in","r",stdin);
    int n,count;
    int i,j;
    int num[1000];
    cin>>n;
    while(n--)
    {
        cin>>count;
        for(i=0;i<count;i++)
            cin>>num[i];
        Insertion_Sort(num,count);
        for(i=0;i<count;i++)
        {
            cout<<num[i];
            if(i!=count-1)
                cout<<" ";
            else
                cout<<endl;
        }
    }
    return 0;
}
