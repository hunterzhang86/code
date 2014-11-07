#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2015.in","r",stdin);
    int len,gap;
    while(cin>>len>>gap)
    {
        int tmp=len%gap;
        int num=2;
        int sum=0;
        int flag=0;
        if(tmp==0)
        {
            int i;
            for(i=1;i<=len;i++)
            {
                sum=sum+2*i;
                flag++;
                if(flag==gap)
                {
                    if(i==gap)
                        cout<<sum/gap;
                    else
                        cout<<" "<<sum/gap;
                    sum=0;
                    flag=0;
                }
            }
            cout<<endl;
        }
        else
        {
            int i;
            for(i=1;i<=len-tmp;i++)
            {
                sum=sum+2*i;
                flag++;
                if(flag==gap)
                {
                    if(i==gap)
                        cout<<sum/gap;
                    else
                        cout<<" "<<sum/gap;
                    sum=0;
                    flag=0;
                }
            }
            sum=0;
            for(i=len-tmp+1;i<=len;i++)
            {
                sum=sum+2*i;
            }
            if(len/gap==0)
                cout<<sum/tmp;
            else
                cout<<" "<<sum/tmp;
            cout<<endl;
        }
    }
    return 0;
}
