#include <iostream>
#include <fstream>
#include <string.h>
#define N 10000
using namespace std;

int main()
{
    char charm[N][22],fun[N][80],tmp;
    int count=0,i=0,j=0,k=0;
    ifstream cin("1029.in");
    while(i<10000)
    {
        while(cin>>tmp&&j<22)
        {

            if(tmp==']')
            {
                charm[i][++j]='\0';
                break;
            }
            charm[i][j++]=tmp;
        }
        cin>>tmp;
        while(cin>>tmp&&k<80)
        {
            if(tmp=='\n')
            {
                charm[i][k++]='\0';
                break;
            }
            charm[i][k++]=tmp;

        }
        i++;
        j=0;
        k=0;
        count++;
    }
    for(i=0;i<2;i++)
    {
         for(j=0;j<strlen(charm[i]);j++)
            cout<<charm[i][j];
        cout<<endl;
    }
    return 0;
}
