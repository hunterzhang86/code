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

node *merge(node *head1,node *head2)
{
    node *head=(node *)malloc(sizeof(node));
    node *p=head;
    node *p1=head1;
    node *p2=head2;
    while(p1!=NULL&&p2!=NULL)
    {
        node *tmp=(node *)malloc(sizeof(node));
        if(p1->data <= p2->data)
        {
            tmp->data=p1->data;
            p1=p1->next;
        }
        else
        {
            tmp->data=p2->data;
            p2=p2->next;
        }
        p->next=tmp;
        p=tmp;
    }
    while(p1!=NULL)
    {
        node *tmp=(node *)malloc(sizeof(node));
        tmp->data=p1->data;
        p->next=tmp;
        p=tmp;
        p1=p1->next;
    }
    while(p2!=NULL)
    {
        node *tmp=(node *)malloc(sizeof(node));
        tmp->data=p2->data;
        p->next=tmp;
        p=tmp;
        p2=p2->next;
    }
    p->next=NULL;
    head=head->next;
    return head;
}

int main()
{
    freopen("1519.in","r",stdin);
    node *head,*head1,*head2;
    int m,n;
    while(cin>>m>>n)
    {
        if(n<=0&&m<=0)
            cout<<"NULL"<<endl;
        else
        {
            head1=creat(m);
            head2=creat(n);
            head=merge(head1,head2);
            print(head);
        }

    }
    return 0;
}



