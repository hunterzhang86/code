#include <iostream>
#include <fstream>
#include <stack>
#include <stdlib.h>
using namespace std;

struct ListNode
{
	int m_nValue;
	ListNode* m_pNext;
};

void AddNode(ListNode *pHead, int value)
{
	ListNode *pNew = new ListNode();
	pNew->m_nValue=value;
	pNew->m_pNext=NULL;
	if(pHead == NULL)
	{
		pHead = pNew;
	}
	else
	{
		ListNode *pNode = pHead;
		while(pNode->m_pNext != NULL)
			pNode = pNode->m_pNext;
		pNode->m_pNext=pNew;
	}
}

void PrintList(ListNode *pHead)
{
	if(pHead==NULL)
		return;
	ListNode *pNode = new ListNode();
	pNode = pHead->m_pNext;
	while(pNode != NULL)
	{
		printf("%d\n",pNode->m_nValue);
		pNode = pNode->m_pNext;
	}
}


void PrintReverseList(ListNode *pHead)
{
	if(pHead==NULL)
		return;
	stack<ListNode*> nodes;
	ListNode *pNode = pHead->m_pNext;
	while(pNode != NULL)
	{
		nodes.push(pNode);
		pNode = pNode->m_pNext;
	}
	while(!nodes.empty())
	{
		printf("%d\n",nodes.top()->m_nValue);
		nodes.pop();		
	}
}

int main()
{
	freopen("1511.in","r",stdin);
	ListNode *pHead=new ListNode();
	pHead->m_pNext=NULL;
	int temp;
	while(scanf("%d",&temp) != EOF)
	{
		if(temp == -1)
			break;
		AddNode(pHead, temp);
	}
	PrintList(pHead);
	PrintReverseList(pHead);
	return 0;
}