#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
const int M=101*1000;
int main()
{
    freopen("t1.in","r",stdin);
  //  freopen("t1.out","w",stdout);
    int n;
    while(scanf("%d",&n)!=EOF){
        char str[M];
        gets(str);
        gets(str);
        int i,j,t;
        i=0;
        for(i=0;i<n;i++){
            if(str[i]!=' '&&(i==0||str[i-1]==' ')){//�ж��Ƿ���һ���Ӵ��Ŀ�ʼ
                for(j=i;j<n&&str[j]!=' ';j++);
                t=j-1;
                while(t>=i){
                    putchar(str[t--]);
                }
                i=j-1;
            }
            else if(str[i]==' '&&(i==0||str[i-1]!=' '))//һ���Ӵ�������
                putchar(' ');
        }
        puts("");
    }
    return 0;
}
