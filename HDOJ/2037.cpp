#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2037.in","r",stdin);
    int n;
    int start[101],end[101];
    while(cin>>n&&n!=0)
    {
        int i,j,k;
        for(i=0;i<n;i++)
            cin>>start[i]>>end[i];
        for(i=0;i<n;i++)
            for(j=0;j<n-i-1;j++)
            {
                if(end[j]>end[j+1])
                {
                    int tmp;
                    tmp=start[j];
                    start[j]=start[j+1];
                    start[j+1]=tmp;
                    tmp=end[j];
                    end[j]=end[j+1];
                    end[j+1]=tmp;
                }
            }
        int count=1;
        int right=end[0];
        for(i=1;i<n;i++)
        {
            if(start[i]>=right)
            {
                count++;
                right=end[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
