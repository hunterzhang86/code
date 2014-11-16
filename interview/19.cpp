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

    printf(" %d", pRoot->m_nValue);

    if (pRoot->m_pLeft)
        PrintBinaryTree(pRoot->m_pLeft);

    if (pRoot->m_pRight)
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
        char ch[20];

        //以%s的形式输入
        scanf("%s", &ch);

        if (ch[0] == 'z')
            continue;

        if (ch[0] == 'r')
        {
            int nodeIndex;
            scanf("%d", &nodeIndex);
            ConnectNode(treeNode[i], NULL, treeNode[nodeIndex]);
        }

        else if (ch[0] == 'l')
        {
            int nodeIndex;
            scanf("%d", &nodeIndex);
            ConnectNode(treeNode[i], treeNode[nodeIndex], NULL);
        }

        else if (ch[0] == 'd')
        {
            int nodeIndex1, nodeIndex2;
            scanf("%d%d", &nodeIndex1, &nodeIndex2);
            ConnectNode(treeNode[i], treeNode[nodeIndex1], treeNode[nodeIndex2]);
        }
    }

    return pRoot;
}

void ImageOfBT(BinaryTreeNode *pRoot)
{
    if (pRoot == NULL || (pRoot->m_pLeft == NULL && pRoot->m_pRight == NULL))
        return;

    BinaryTreeNode *tempNode = pRoot->m_pLeft;
    pRoot->m_pLeft = pRoot->m_pRight;
    pRoot->m_pRight = tempNode;

    if (pRoot->m_pLeft)
        ImageOfBT(pRoot->m_pLeft);

    if (pRoot->m_pRight)
        ImageOfBT(pRoot->m_pRight);
}

int main()
{
    freopen("19.in", "r", stdin);

    int length;

    while (scanf("%d", &length) != EOF)
    {
        BinaryTreeNode *pRoot = CreatBinaryTree(length);

        /*
                printf("%d",pRoot->m_nValue);

                PrintBinaryTree(pRoot->m_pLeft);
                PrintBinaryTree(pRoot->m_pRight);
                cout<<endl;*/

        ImageOfBT(pRoot);

        if (pRoot != NULL)
            printf("%d", pRoot->m_nValue);
        if (pRoot->m_pLeft != NULL)
            PrintBinaryTree(pRoot->m_pLeft);
        if (pRoot->m_pRight != NULL)
            PrintBinaryTree(pRoot->m_pRight);
        cout << endl;
    }

    return 0;
}