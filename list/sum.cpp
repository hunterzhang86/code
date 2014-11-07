#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
#define N 10
using namespace std;

int sum(int *a,int n)
{
    return n==0?0:sum(a,n-1)+a[n-1];
}

void MaxandMin(int *a,int l,int r,int &maxValue,int &minValue)
{
    if(l==r)
    {
        maxValue=a[l];
        minValue=a[l];
        return;
    }
    if(r==l+1)
    {
        if(a[r]>=a[l])
        {
            maxValue=a[r];
            minValue=a[l];
            return;
        }
        else
        {
            maxValue=a[l];
            minValue=a[r];
            return;
        }
    }

    int mid=(r+l)/2;

    int lmax;
    int lmin;
    MaxandMin(a,l,mid,lmax,lmin);

    int rmax;
    int rmin;
    MaxandMin(a,mid+1,r,rmax,rmin);

    maxValue=max(lmax,rmax);
    minValue=min(lmin,rmin);
}

void MaxandMax2(int *a,int l,int r,int &maxValue,int &maxValue2)
{
    if(l==r)
    {
        maxValue=a[l];
        maxValue2=a[l];
        return;
    }
    if(l==r-1)
    {
        if(a[l]>=a[r])
        {
            maxValue=a[l];
            maxValue2=a[r];
            return;
        }
        else
        {
            maxValue=a[r];
            maxValue2=a[l];
            return;
        }
    }

    int m=(l+r)/2;

    int lmax,lmax2;
    MaxandMax2(a,l,m,lmax,lmax2);

    int rmax,rmax2;
    MaxandMax2(a,m+1,r,rmax,rmax2);

    if(lmax>rmax)
    {
        maxValue=lmax;
        if(rmax>lmax2)
            maxValue2=rmax;
        else
            maxValue2=lmax2;
    }

    else if(rmax>lmax)
    {
        maxValue=rmax;
        if(lmax>rmax2)
            maxValue2=lmax;
        else
            maxValue2=rmax2;
    }
}

int compare(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}

void MinimumDistance(int *a,int n)
{
    qsort(a,n,sizeof(int),compare);
    int i,j;
    int minDistance=a[1]-a[0];

    for(int k=0;k<n-1;k++)
    {
        if((a[k+1]-a[k])<minDistance)
        {
            minDistance=a[k+1]-a[k];
            i=a[k];
            j=a[k+1];
        }
    }


    cout<<minDistance<<endl;
    cout<<"i = "<<i<<" j = "<<j<<endl;
}

void FindCommon(int *a,int *b,int n)
{
    qsort(a,n,sizeof(int),compare);
    qsort(b,n,sizeof(int),compare);
    for(int i=0,j=0;i<n&&j<n;)
    {
        if(a[i]>b[j])
            j++;
        else if(a[i]<b[j])
            i++;
        else if(a[i]==b[j])
        {
            cout<<a[i]<<endl;
            i++;
            j++;
        }
    }
}

void FindCommonElements( int a[], int b[], int c[], int x, int y, int z)
{
    qsort(a,x,sizeof(int),compare);
    qsort(b,y,sizeof(int),compare);
    qsort(c,z,sizeof(int),compare);
    for(int i=0,j=0;i<x&&j<y;)
    {
        if(a[i]>b[j])
            j++;
        else if(a[i]<b[j])
            i++;
        else if(a[i]==b[j])
        {
            for(int k=0;k<z;k++)
            {
                if(a[i]>c[k])
                    continue;
                else if(a[i]==c[k])
                {
                    cout<<c[k]<<endl;
                    return;
                }
                else
                    break;
            }
            i++;
            j++;
        }
    }
}

bool BinarySearch( int *a, int n, int k)
{
    int left = 0 ;
    int right = n - 1 ;
    while (left <= right )
    {
        int mid = (left+right)/2;
        if(a[mid] == k)
            return true ;
        if(a[mid] < k)
            left = mid + 1 ;
        else
            right = mid - 1 ;
    }
    return false ;
}


int UniqueCommonItem( int *a, int *b , int * c, int n)
{
    qsort(a, n, sizeof (int), compare) ; // NlogN

    qsort(b, n, sizeof (int), compare) ; // NlogN

    for (int i = 0; i < n; i++)
    {
        if(BinarySearch (a , n , c [i ]) && BinarySearch(b, n, c[ i]))
            return c[ i] ;
    }

    return - 1 ; // not found
}

int UniqueCommonItem1( int *a, int *b , int * c, int n)
{
    qsort(a, n, sizeof (int), compare) ; // NlogN

    bool *bb = new bool[n] ;
    memset(bb, 0 , n ) ;

    bool *bc = new bool[n] ;
    memset(bc, 0 , n ) ;

    for (int i = 0; i < n; i++) // NlogN
    {
        if(BinarySearch (a , n , b [i ]))
            bb[ i] = true ;
    }

    for (int i = 0; i < n; i++) // NlogN
    {
        if(bb[i] && BinarySearch(a, n, c[i]))
            return c[ i] ;
    }

    return - 1 ;
}

int main()
{
    freopen("sum.in","r",stdin);
    int a[N];

    int b[10]={3,6,99,100,88,76,35,98,10,87};
    int c[10]={6,3,929,1020,88,716,315,918,110,817};

    for(int i=0;i<N;i++)
        cin>>a[i];
/*    int maxValue=a[0],minValue=a[0];
    MaxandMin(a,0,N-1,maxValue,minValue);
    cout<<maxValue<<' '<<minValue<<endl;
    int max1=a[0],max2=a[0];
    MaxandMax2(a,0,N-1,max1,max2);
    cout<<max1<<' '<<max2<<endl;
    cout<<sum(a,N)<<endl;

    MinimumDistance(a,N);
*/
//    FindCommon(a,b,N);
 //   FindCommonElements(a,b,c,10,10,10);

    cout<<UniqueCommonItem(a,b,c,N)<<endl;
    cout<<UniqueCommonItem1(a,b,c,N)<<endl;

 //   qsort(a,N,sizeof(int),compare);
 //   cout<<BinarySearch(a,N,43)<<endl;
    return 0;
}
