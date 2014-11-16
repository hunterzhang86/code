#include <iostream>
#include <fstream>
using namespace std;

struct ComplexListNode
{
    int m_nValue;
    ComplexListNode *m_pNext;
    ComplexListNode *m_pSibling;
};

ComplexListNode *CreatComplexList(ComplexListNode *pNode)
{
    if (pNode == NULL)
        return NULL;

    ComplexListNode *pHead = pNode;
    pHead->m_pNext = NULL;
    pHead->m_pSibling = NULL;

    return pHead;
}

void PrintComplexList(ComplexListNode *pHead)
{
    if (pHead == NULL)
        return;

    ComplexListNode *pNode = pHead;

    while (pNode != NULL)
    {
        if (pNode->m_pSibling != NULL)
            cout << pNode->m_nValue << ' ' << pNode->m_pSibling->m_nValue << endl;

        else
            cout << pNode->m_nValue << " 0" << endl;

        pNode = pNode->m_pNext;
    }
}

void CloneNode(ComplexListNode *pHead)
{
    if (pHead == NULL)
        return;

    ComplexListNode *pNode = pHead;

    while (pNode != NULL)
    {
        ComplexListNode *pCloneNode = new ComplexListNode();
        pCloneNode->m_nValue = pNode->m_nValue;
        pCloneNode->m_pNext = pNode->m_pNext;
        pNode->m_pNext = pCloneNode;

        pNode = pCloneNode->m_pNext;
    }
}

void ConnectSiblingNode(ComplexListNode *pHead)
{
    if (pHead == NULL)
        return;

    ComplexListNode *pNode = pHead;

    while (pNode != NULL)
    {
    	ComplexListNode *pCloneNode = pNode->m_pNext;	//这句必须在这里，不能放后面！！

        if (pNode->m_pSibling == NULL)
            pCloneNode->m_pSibling = NULL;

        else
            pCloneNode->m_pSibling = pNode->m_pSibling->m_pNext;

        pNode = pCloneNode->m_pNext;
    }
}

ComplexListNode *ReConnectNode(ComplexListNode *pHead)
{
    if (pHead == NULL)
        return NULL;

    ComplexListNode *pNode = pHead;
    ComplexListNode *pCloneNode = NULL;
    ComplexListNode *pCloneHead = NULL;

    if(pNode != NULL)
    {
    	pCloneNode = pCloneHead = pNode->m_pNext;

    	pNode->m_pNext = pCloneNode->m_pNext;
    	pNode = pNode->m_pNext;
    }
    
    //这里pNode须在pCloneNode的后面
    while (pNode != NULL)
    {
        pCloneNode->m_pNext = pNode->m_pNext;
        pCloneNode = pCloneNode->m_pNext;

        pNode->m_pNext = pCloneNode->m_pNext;
        pNode = pNode->m_pNext;
    }

    return pCloneHead;
}

ComplexListNode *Clone(ComplexListNode *pHead)
{
    if (pHead == NULL)
        return NULL;

    CloneNode(pHead);
    ConnectSiblingNode(pHead);
    return ReConnectNode(pHead);
}

int main()
{
    freopen("27.in", "r", stdin);

    int nLength;
    int value;

    while (cin >> nLength)
    {
        ComplexListNode *pNode[nLength + 1];

        cin >> value;
        pNode[1] = new ComplexListNode();
        pNode[1]->m_nValue = value;
        pNode[1]->m_pNext = NULL;
        pNode[1]->m_pSibling = NULL;

        ComplexListNode *pHead = CreatComplexList(pNode[1]);

        for (int i = 2; i <= nLength; i++)
        {
            pNode[i] = new ComplexListNode();

            cin >> value;

            pNode[i]->m_nValue = value;
            pNode[i - 1]->m_pNext = pNode[i];
            pNode[i]->m_pNext = NULL;
            pNode[i]->m_pSibling = NULL;
        }

        for (int i = 1; i <= nLength; i++)
        {
            cin >> value;

            if (value > 0 && value <= nLength)
                pNode[i]->m_pSibling = pNode[value];
        }

        ComplexListNode *pCloneHead = Clone(pHead);

        PrintComplexList(pCloneHead);
    }

    return 0;
}