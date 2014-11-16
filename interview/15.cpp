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

ListNode *findLastK(ListNode *pHead, int length, int k)
{
    if (pHead == NULL || length <= 0 || k <= 0 || k > length)
        return NULL;

    ListNode *pNode1 = pHead->m_pNext;
    ListNode *pNode2 = pHead->m_pNext;

    for (int i = 0; i < k - 1 && pNode2 != NULL; i++)
        pNode2 = pNode2->m_pNext;

    if (pNode2 == NULL)
        return NULL;

    while (pNode2->m_pNext != NULL)
    {
        pNode1 = pNode1->m_pNext;
        pNode2 = pNode2->m_pNext;
    }

    return pNode1;
}

ListNode *findLastK1(ListNode *pHead, int length, int k)
{
    if (pHead == NULL || length <= 0 || k <= 0 || k > length)
        return NULL;

    ListNode *pNode = pHead->m_pNext;

    for (int i = 0; i < length - k && pNode != NULL; i++)
        pNode = pNode->m_pNext;

    return pNode;
}

int main()
{
    freopen("15.in", "r", stdin);

    int length, k;
    int nodeValue;

    while (scanf("%d%d", &length, &k) != EOF)
    {
        ListNode *pHead = new ListNode();
        pHead->m_pNext = NULL;

        for (int i = 0; i < length; i++)
        {
            scanf("%d", &nodeValue);
            insertNode(pHead, nodeValue);
        }

        ListNode *pNode = findLastK1(pHead, length, k);

        if (pNode != NULL)
            printf("%d\n", pNode->m_nValue);
        else
            printf("NULL\n");
    }

    return 0;
}