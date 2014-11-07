//´íÎóµÄ´ğ°¸

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    freopen("1514.in","r",stdin);
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double base;
        int ex;
        cin>>base>>ex;
        printf("%.2e\n",pow(base,ex));
    }
    return 0;
}


