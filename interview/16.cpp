#include <iostream>
#include <fstream>
using namespace std;

struct ListNode
{
    int m_nValue;
    ListNode *m_pNext;
};

void insertNode(ListNode *pHead, int nodeValue)
{
    if (pHead == NULL)
        return;

    ListNode *pNode = pHead;
    while (pNode->m_pNext != NULL)
    {
        pNode = pNode->m_pNext;
    }

    ListNode *newNode = new ListNode();
    newNode->m_nValue = nodeValue;
    newNode->m_pNext = NULL;

    pNode->m_pNext = newNode;
}

void printList(ListNode *pHead)
{
    if (pHead == NULL)
        return;

    ListNode *pNode = pHead->m_pNext;

    while (pNode->m_pNext != NULL)
    {
        printf("%d ", pNode->m_nValue);
        pNode = pNode->m_pNext;
    }

    if (pNode != NULL)
        printf("%d\n", pNode->m_nValue);
}

void reverseList(ListNode* pHead)
{
    if(pHead == NULL)
        return;

    ListNode* pHeadTemp = pHead->m_pNext;

    if(pHeadTemp == NULL)
        return;

    ListNode* pAhead = pHeadTemp;
    ListNode* pBehind = pHeadTemp->m_pNext;

    while(pBehind != NULL)
    {
        ListNode *pBehindBehind = pBehind->m_pNext;

        pBehind->m_pNext = pAhead;

        pAhead = pBehind;
        pBehind = pBehindBehind;
    }

    pHeadTemp->m_pNext = NULL;

    pHead->m_pNext = pAhead;
}

int main()
{
    freopen("16.in", "r", stdin);

    int length;
    int nodeValue;

    while (scanf("%d", &length) != EOF)
    {
        ListNode *pHead = new ListNode();
        pHead->m_pNext = NULL;

        for (int i = 0; i < length; i++)
        {
            scanf("%d", &nodeValue);
            insertNode(pHead, nodeValue);
        }

        reverseList(pHead);
        if(pHead->m_pNext != NULL)
            printList(pHead);
        else 
            printf("NULL\n");
    }

    return 0;
}