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
            if(str[i]!=' '&&(i==0||str[i-1]==' ')){//判断是否是一个子串的开始
                for(j=i;j<n&&str[j]!=' ';j++);
                t=j-1;
                while(t>=i){
                    putchar(str[t--]);
                }
                i=j-1;
            }
            else if(str[i]==' '&&(i==0||str[i-1]!=' '))//一个子串结束了
                putchar(' ');
        }
        puts("");
    }
    return 0;
}
