#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("1515.in","r",stdin);
    int n;
    scanf("%d",&n);
    int last=pow(10,n);
    for(int i=1;i<last;i++)
        printf("%d\n",i);
    return 0;
}

