#include <iostream>
#include <fstream>
#include <cstring>
#define N 21
using namespace std;

int main()
{
    freopen("1009.in","r",stdin);
    int n,i,flag;
    char str_1[N],str_2[N],tmp;
    while(cin>>n&&n!=0)
    {
        scanf("%c",&tmp);
        gets(str_1);
        while(n--)
        {
            i=1;
            flag=1;
            gets(str_2);
            if(strlen(str_1)>2&&strlen(str_1)%2!=0)
            {
                while(i<strlen(str_1)&&i+1<strlen(str_1))
                {
                    if((str_1[i]==str_1[i]&&str_1[i+1]==str_1[i+1])||(str_1[i]==str_1[i+1]&&str_1[i+1]==str_1[i]))
                        i=i+2;
                    else
                    {
                        flag=0;
                        printf("NO\n");
                        break;
                    }
                }
                if(flag==1)
                    printf("YES\n");
            }
            else
            {
                while(i<strlen(str_1)&&i+1<strlen(str_1))
                {
                    if((str_1[i]==str_1[i]&&str_1[i+1]==str_1[i+1])||(str_1[i]==str_1[i+1]&&str_1[i+1]==str_1[i]))
                        i=i+2;
                    else
                    {
                        flag=0;
                        printf("NO\n");
                        break;
                    }

                }
                if(str_1[strlen(str_1)-1]==str_2[strlen(str_2)-1]&&flag==1)
                    printf("YES\n");
                else
                    printf("NO\n");

            }
        }
    }
    return 0;
}

