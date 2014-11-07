#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2007.in","r",stdin);
    int x,y;
    int evenSum,oddSum;
    while(cin>>x>>y)
    {
        evenSum=0;
        oddSum=0;
        if(x>y) //зЂвт
        {
            int tmp;
            tmp=x;
            x=y;
            y=tmp;
        }
        int i;
        for(i=x;i<=y;i++)
        {
            if(i%2==0)
                evenSum+=i*i;
            else
                oddSum+=i*i*i;
        }
        cout<<evenSum<<' '<<oddSum<<endl;
    }
    return 0;
}


