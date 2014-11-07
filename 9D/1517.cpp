#include <iostream>
#include <fstream>
#include <cstring>
#include <malloc.h>
using namespace std;

typedef struct student
{
    int data;
    struct student *next;
}node;

node *head;

node *creat(int n)
{
    node *head,*p,*s;
    int x;
    head=(node *)malloc(sizeof(node));
    p=head;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        s=(node *)malloc(sizeof(node));
        s->data=x;
        p->next=s;
        p=s;
    }
    head=head->next;
    p->next=NULL;
    return head;
}

int searchLast(node *head,int n,int last)
{
    int k=n-last;
    node *p=head;
    while(k--)
    {
        p=p->next;
    }
    return p->data;
}

int main()
{
    freopen("1517.in","r",stdin);
    int n,last;
    while(cin>>n>>last)
    {
        head=creat(n);
        if(last<=0||last>n)
            cout<<"NULL"<<endl;
        else
            cout<<searchLast(head,n,last)<<endl;
    }
    return 0;
}


