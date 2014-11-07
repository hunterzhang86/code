#include <iostream>
#include <string.h>
using namespace std;

#define MAX 100

int main()
{
    char num[10][6]={{"zero"},{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"}};
    char strin[6];
    int ca,flag,mult,numleft,numright,cleft,cright,left[3]={0},right[3]={0};
    flag=cleft=cright=0;
    while(cin>>strin)
    {
        if(strcmp(strin,"+")==0)
        {   flag=1;continue;}
        
        if(strcmp(strin,"=")==0)
        {
            mult=1;numleft=numright=0;
            for(ca=cleft-1;ca>=0;ca--)
            {   numleft+=mult*left[ca];mult*=10;}
            mult=1;
            for(ca=cright-1;ca>=0;ca--)
            {   numright+=mult*right[ca];mult*=10;}
            if(numleft+numright==0)
                return 0;
            cout<<numright+numleft<<endl;
            flag=cleft=cright=0;
            continue;
        }//if
        
        for(ca=0;ca<10;ca++)
        {
            if(strcmp(strin,num[ca])==0)
            {
                if(flag==0)
                {   left[cleft++]=ca;break;}
                else
                {   right[cright++]=ca;break;}
            }
        }//for
    }//while
    return 0;
}
