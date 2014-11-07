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

node *reverse(node *head)
{
    node *p1,*p2,*p3;
    if(head==NULL||head->next==NULL)
        return head;
    p1=head;
    p2=p1->next;
    while(p2!=NULL)
    {
        p3=p2->next;
        p2->next=p1;
        p1=p2;
        p2=p3;
    }
    head->next=NULL;
    head=p1;
    return head;
}

void print(node *head)
{
    node *p;
    p=head;
    while(p->next!=NULL)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<p->data<<endl;
}

node *MyReverse(node *head)
{
    if(head->next==NULL||head->next==NULL)
        return head;
    node *p1,*p2,*p3;
    p1=head;
    p2=head->next;
    while(p2!=NULL)
    {
        p3=p2->next;
        p2->next=p1;
        p1=p2;
        p2=p3;
    }
    head->next=NULL;
    head=p1;
    return head;
}

int main()
{
    freopen("1518.in","r",stdin);
    int n,last;
    while(cin>>n)
    {
        if(n<=0)
            cout<<"NULL"<<endl;
        else
        {
            head=creat(n);
            head=MyReverse(head);
            print(head);
        }

    }
    return 0;
}



