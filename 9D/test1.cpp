#include <iostream>
#include <fstream>
#include <malloc.h>
using namespace std;

int test[10000][10000];

int main()
{
    //���峬���ά���鷽��һ
    int *p=new int[10000*10000];
    p[2*1000+100]=1;
    cout<<p[2*1000+100]<<endl;

    //���峬���ά���鷽����
    int **q=new int*[1000];
    for(int i=0;i<1000;i++)
        q[i]=new int[1000];
    q[1][1]=1;
    cout<<q[1][1]<<endl;

    //ʮ�򻹿��ԣ�һ�������е�ʱ������
    int **a=(int **)malloc(sizeof(int)*100000);
    a[1][1]=1;
    cout<<a[1][1]<<endl;

    //ͬ��1000*100��ʱ����ԣ�1000*1000����
    int b[1000][100];
    b[1][1]=1;
    cout<<b[1][1]<<endl;

    //���峬��һά����
    int *p1=new int[1000000];
    p1[1]=1;
    cout<<p1[1]<<endl;

    //ʮ�򻹿��ԣ�һ�������е�ʱ��Ҳ�������Ϊʲô�����ά��ʱ�򲻿��ԡ���
    int *a1=(int *)malloc(sizeof(int)*1000000);
    a1[1]=1;
    cout<<a1[1]<<endl;

    //ʮ�򻹿��ԣ�һ�������е�ʱ������
    int c[100000];
    c[1]=1;
    cout<<c[1]<<endl;

    test[1][1]=1;
    cout<<test[1][1]<<endl;
    return 0;

}
