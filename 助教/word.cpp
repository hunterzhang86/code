#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a,b,i,c=0;
    char word[20];
    cin>>a;
    cin>>word;
    b=strlen(word);
    for(i=0;i<b;i++)
    {
        cout<<word[i];
        do
        {
            cout<<" ";
            c++;
        }while(c!=a);
        c=0;
    }
}
