#include <iostream>
#include <fstream>
#include <malloc.h>
using namespace std;

int test[10000][10000];

int main()
{
    //定义超大二维数组方法一
    int *p=new int[10000*10000];
    p[2*1000+100]=1;
    cout<<p[2*1000+100]<<endl;

    //定义超大二维数组方法二
    int **q=new int*[1000];
    for(int i=0;i<1000;i++)
        q[i]=new int[1000];
    q[1][1]=1;
    cout<<q[1][1]<<endl;

    //十万还可以，一百万运行的时候会出错
    int **a=(int **)malloc(sizeof(int)*100000);
    a[1][1]=1;
    cout<<a[1][1]<<endl;

    //同样1000*100的时候可以，1000*1000出错
    int b[1000][100];
    b[1][1]=1;
    cout<<b[1][1]<<endl;

    //定义超大一维数组
    int *p1=new int[1000000];
    p1[1]=1;
    cout<<p1[1]<<endl;

    //十万还可以，一百万运行的时候也不会出错，为什么定义二维的时候不可以。。
    int *a1=(int *)malloc(sizeof(int)*1000000);
    a1[1]=1;
    cout<<a1[1]<<endl;

    //十万还可以，一百万运行的时候会出错
    int c[100000];
    c[1]=1;
    cout<<c[1]<<endl;

    test[1][1]=1;
    cout<<test[1][1]<<endl;
    return 0;

}
