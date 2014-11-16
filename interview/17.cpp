#include <iostream>
#include <fstream>
using namespace std;

struct ListNode
{
    int m_nValue;
    ListNode *m_pNext;
};

ListNode *insertNode(ListNode *pHead, int nodeValue)
{
    if (pHead == NULL)
        return NULL;

    ListNode *pNode = pHead;
    while (pNode->m_pNext != NULL)
    {
        pNode = pNode->m_pNext;
    }

    ListNode *newNode = new ListNode();
    newNode->m_nValue = nodeValue;
    newNode->m_pNext = NULL;

    pNode->m_pNext = newNode;

    return pHead;
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

ListNode *MergeList(ListNode *pHead1, ListNode *pHead2)
{
    if(pHead2 == NULL)
        return pHead1;
    else if(pHead1 == NULL)
        return pHead2;

    ListNode* pHead = new ListNode();
    pHead->m_pNext = NULL;

    ListNode* pNode1 = pHead1->m_pNext;
    ListNode* pNode2 = pHead2->m_pNext;

    while(pNode1 != NULL && pNode2 != NULL)
    {
        if(pNode1->m_nValue < pNode2->m_nValue)
        {
            insertNode(pHead, pNode1->m_nValue);
            pNode1 = pNode1->m_pNext;
        }
        else
        {
            insertNode(pHead, pNode2->m_nValue);
            pNode2 = pNode2->m_pNext;
        }
    }

    if(pNode1 == NULL)
    {
        while(pNode2 != NULL)
        {
            insertNode(pHead, pNode2->m_nValue);
            pNode2 = pNode2->m_pNext;
        }
    }
        
    else if(pNode2 == NULL)
    {
        while(pNode1 != NULL)
        {
            insertNode(pHead, pNode1->m_nValue);
            pNode1 = pNode1->m_pNext;
        }
    }

    return pHead;
}

int main()
{
    freopen("17.in", "r", stdin);

    int length1, length2;
    int nodeValue;

    while (scanf("%d%d", &length1, &length2) != EOF)
    {
        ListNode *pHead1 = new ListNode();
        pHead1->m_pNext = NULL;

        ListNode *pHead2 = new ListNode();
        pHead2->m_pNext = NULL;

        for (int i = 0; i < length1; i++)
        {
            scanf("%d", &nodeValue);
            insertNode(pHead1, nodeValue);
        }

        for (int i = 0; i < length2; i++)
        {
            scanf("%d", &nodeValue);
            insertNode(pHead2, nodeValue);
        }

        ListNode *pHead = MergeList(pHead1, pHead2);

        if (pHead->m_pNext != NULL)
            printList(pHead);
        else
            printf("NULL\n");
    }

    return 0;
}