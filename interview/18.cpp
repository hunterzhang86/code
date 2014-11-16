#include <iostream>
#include <fstream>
using namespace std;

struct BinaryTreeNode
{
    int m_nValue;
    BinaryTreeNode *m_pLeft;
    BinaryTreeNode *m_pRight;
};

void PrintBinaryTree(BinaryTreeNode *pRoot)
{
    if (pRoot == NULL)
        return;

    printf("%d ", pRoot->m_nValue);

    PrintBinaryTree(pRoot->m_pLeft);

    PrintBinaryTree(pRoot->m_pRight);
}

BinaryTreeNode *ConnectNode(BinaryTreeNode *pParent, BinaryTreeNode *pLeftChild, BinaryTreeNode *pRightChild)
{
    if (pParent == NULL)
        return NULL;

    pParent->m_pLeft = pLeftChild;
    pParent->m_pRight = pRightChild;

    return pParent;
}

BinaryTreeNode *treeNode[1001];

BinaryTreeNode *CreatBinaryTree(int length)
{
    if (length <= 0)
        return NULL;

    for (int i = 1; i <= length; i++)
    {
        int value;

        scanf("%d", &value);

        treeNode[i] = new BinaryTreeNode();

        treeNode[i]->m_nValue = value;
        treeNode[i]->m_pLeft = NULL;
        treeNode[i]->m_pRight = NULL;
    }

    BinaryTreeNode *pRoot = treeNode[1];

    for (int i = 1; i <= length; i++)
    {
        int count;
        scanf("%d", &count);

        //这里没有区分左右孩子
        if (count == 1)
        {
            int nodeIndex;
            scanf("%d", &nodeIndex);
            ConnectNode(treeNode[i], treeNode[nodeIndex], NULL);
        }

        else if (count == 2)
        {
            int nodeIndex1, nodeIndex2;
            scanf("%d%d", &nodeIndex1, &nodeIndex2);
            ConnectNode(treeNode[i], treeNode[nodeIndex1], treeNode[nodeIndex2]);
        }
    }

    return pRoot;
}

bool DoesTree1HaveTree2(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2)
{
    if (pRoot2 == NULL)
        return true;

    if (pRoot1 == NULL)
        return false;

    if (pRoot1->m_nValue != pRoot2->m_nValue)
        return false;

    return DoesTree1HaveTree2(pRoot1->m_pLeft, pRoot2->m_pLeft) && DoesTree1HaveTree2(pRoot1->m_pRight, pRoot2->m_pRight);
}

bool HasSubtree(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2)
{
    bool result = false;

    if (pRoot1 != NULL && pRoot2 != NULL)
    {
        if (pRoot1->m_nValue == pRoot2->m_nValue)
            result = DoesTree1HaveTree2(pRoot1, pRoot2);

        if (!result)
            result = HasSubtree(pRoot1->m_pLeft, pRoot2);

        if (!result)
            result = HasSubtree(pRoot1->m_pRight, pRoot2);
    }

    return result;
}

int main()
{
    freopen("18.in", "r", stdin);

    int length1, length2;

    while (scanf("%d%d", &length1, &length2) != EOF)
    {
        BinaryTreeNode *pRoot1 = CreatBinaryTree(length1);

        BinaryTreeNode *pRoot2 = CreatBinaryTree(length2);

        /*      PrintBinaryTree(pRoot1);
                cout << endl;
                PrintBinaryTree(pRoot2);
                cout << endl;*/

        if (HasSubtree(pRoot1, pRoot2) && pRoot2 != NULL)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}