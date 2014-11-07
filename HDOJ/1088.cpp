#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    freopen("1088.in","r",stdin);
    freopen("1088.out","w",stdout);
    char ch[81],tmp;
    int i;
    int count=0;
    int flag=1;
    while(scanf("%s",ch)!=EOF)
    {
        if(strcmp(ch,"<br>")==0)
        {
            count=0;
            cout<<endl;
        }
        else if(strcmp(ch,"<hr>")==0)
        {
            if (count > 0)
            {
                count = 0;
                cout << endl;
            }
            for(i=0;i<80;i++)
                cout<<'-';
            cout<<endl;
        }
        else
        {
            count=count+strlen(ch);
            if(count<80)
            {
                if(count>strlen(ch))
                    cout<<' ';
                for(i=0;i<strlen(ch);i++)
                    cout<<ch[i];
                count++;
            }
            else if(count>=80)
            {
                count=strlen(ch);
                cout<<endl;
                for(i=0;i<strlen(ch);i++)
                    cout<<ch[i];
            }
        }
    }
    cout<<endl;
    return 0;
}
