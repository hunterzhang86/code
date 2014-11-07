#include <iostream>
#include <fstream>
using namespace std;

int a[1000][1000];

void printM(int m,int n)
{
    for(int startX=0,startY=0,endX=m,endY=n;startX*2 < m && startY*2 < n;startX++,startY++,endX--,endY--)
    {
        int i=startX;
        int j=startY;
        int p=endX;
        int q=endY;
        while(j<endY)
            printf("%d ",a[startX][j++]);
        i++;
        j--;
        while(i<endX)
            printf("%d ",a[i++][j]);
        i--;
        j--;
        while(j>=startY)
            printf("%d ",a[i][j--]);
        i--;
        j++;
        while(i>startX)
            printf("%d ",a[i--][j]);
    }
    cout<<endl;
}

int main()
{
    freopen("1391.in","r",stdin);
    int m,n;
    while(cin>>m>>n)
    {
        int i,j;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        printM(m,n);
    }
    return 0;
}
