#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("1004.in","r",stdin);
    int n;
    int i,j;
    int count[1002];
    string s[1002];
    while(cin>>n&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            count[i]=1;
            for(j=i-1;j>=0;j--)
                if(s[i]==s[j])
                {
                    count[i]=count[j]+1;
                    break;
                }
        }
        int max=0;
        for(i=1;i<n;i++)
        {
            if(count[i]>count[max])
                max=i;
        }
        cout<<s[max]<<endl;
    }
    return 0;
}
