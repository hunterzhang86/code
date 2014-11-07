#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void Reverse(char str[],int len)
{
    int left=0;
    int right=len-1;
    while(left<right)
    {
        char tmp=str[left];
        str[left]=str[right];
        str[right]=tmp;
        left++;
        right--;
    }
}

int main()
{
    char str[]="Hunter";
    Reverse(str,strlen(str));
    for(int i=0;i<strlen(str);i++)
        cout<<str[i];
    cout<<endl;
    return 0;
}
