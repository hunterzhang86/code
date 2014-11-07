#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct LNode
{ int data;
  struct LNode *next;
};
int main()
{
    freopen("1188.in","r",stdin);
    freopen("1188_1.out","w",stdout);
    int n,q,i,s;
 struct LNode *p,*head,*pre,*temp;
 while(scanf("%d%d",&n,&q)!=EOF)
 {
  p=(struct LNode *)malloc(sizeof(struct LNode));
  p->data=1;
  pre=p;head=p;
  for(i=2;i<=n;i++)
  {p=(struct LNode *)malloc(sizeof(struct LNode));
   p->data=i;
   pre->next=p;
   pre=p;
  }
  pre->next=head;
  p=head;
  while(p->next!=p)
  {   s=q-1;
      while(s--)
  {pre=p;p=p->next;}
      printf("%d ",p->data);
      temp=p;pre->next=p->next;
      p=p->next;free(temp);
  }
     printf("%d\n",p->data);
     free(p);
 }
 return 0;
}

