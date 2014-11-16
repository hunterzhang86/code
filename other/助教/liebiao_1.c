#include <stdio.h>
#include <stdlib.h> 

int num=0;

struct string
{
	char ch;
	struct string *next;
};

struct string *creat(struct string *h)
{
	struct string *p1,*p2;
	p1=p2=(struct string*)malloc(sizeof(struct string));
	if(p2!=NULL)
	{
		scanf("%c",&p2->ch);
		p2->next=NULL;
	}
	while(p2->ch!='\n')
	{
		num++;
		if(h==NULL)
			h=p2;
		else
			p1->next=p2;
		p1=p2;
		p2=(struct string*)malloc(sizeof(struct string));
		if(p2!=NULL)
		{
			scanf("%c",&p2->ch);
			p2->next=NULL;
		}
	}
	return h;
}

void print(struct string *h)
{
	struct string *temp;
	temp=h;
	while(temp!=NULL)
	{
		printf("%c",temp->ch);
		temp=temp->next;
	}
	printf("\n");
}


//ɾ��ĳ���ض�Ԫ��
struct string *delete_string(struct string *h,char de_ch)
{
	struct string *temp1,*temp2;
	temp1=temp2=(struct string*)malloc(sizeof(struct string));
	if(h->ch==de_ch)
	{
		h=h->next;
		temp1=h;
		temp2=h->next;
	}
	temp1=h;
	temp2=h->next;
	while(temp2!=NULL)
	{
		if(temp2->ch==de_ch)
		{
			temp1->next=temp2->next; 
			temp2=temp1->next;
			num--;
		}
		else
		{
			temp1=temp1->next;
			temp2=temp2->next;
		}
	}
	printf("\n"); 
	return h;
}

//����һ���ַ�
struct string *insert(struct string *h,char ch,int location)
{
	struct string *temp1,*temp2;
	temp1=temp2=(struct string*)malloc(sizeof(struct string));
	temp1=h;
	if(location==0)
	{
		temp2->ch=ch;
		temp2->next=h;
		h=temp2;
		num++;
	}
	else
	{
		int i;
		for(i=0;i<location;i++)	
		{
			if(temp1->next==NULL)
			{
				printf("error,location is false!\n");
				return h;
			}
			temp1=temp1->next;
		}
		temp2->ch=ch;
		temp2->next=temp1->next;
		temp1->next=temp2;
		num++;
	}
	return h;
}



int main()
{
	struct string *head;
	head=NULL;
	printf("������һ���ַ�:\n");
	freopen("lianbiao.in","r",stdin);	//ʹ���ļ����룬�Ͳ����ֶ�������
	head=creat(head);
 	print(head);
	head=delete_string(head,'z');
	head=insert(head,'k',13);
	print(head);
	printf("\n������ַ�����Ϊ��%d\n",num);
	return 0;
}