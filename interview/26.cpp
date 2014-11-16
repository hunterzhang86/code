#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct BinaryTreeNode
{
    int m_nValue;
    int id;
    BinaryTreeNode *m_pLeft;
    BinaryTreeNode *m_pRight;
};

BinaryTreeNode *CreatBinaryTree(BinaryTreeNode *pNode)
{
    if (pNode == NULL)
        return NULL;

    BinaryTreeNode *pRoot = pNode;
    pRoot->m_pLeft = NULL;
    pRoot->m_pRight = NULL;

    return pRoot;
}

void ConnectBinaryTreeNode(BinaryTreeNode *pParent, BinaryTreeNode *pLeftChild, BinaryTreeNode *pRightChild)
{
    if (pParent == NULL)
        return;

    pParent->m_pLeft = pLeftChild;
    pParent->m_pRight = pRightChild;
}

void FindPath(BinaryTreeNode *pRoot, int expectSum, int currentSum, std::vector<int> path)
{
    currentSum += pRoot->m_nValue;
    path.push_back(pRoot->id);

    bool isLeaf = pRoot->m_pLeft == NULL && pRoot->m_pRight == NULL;
    if (expectSum == currentSum && isLeaf)
    {
        cout << "A path is found:";

        std::vector<int>::iterator iter = path.begin();
        for (; iter != path.end(); iter++)
            cout << " " << *iter;

        cout << endl;
    }

    if (pRoot->m_pLeft != NULL)
        FindPath(pRoot->m_pLeft, expectSum, currentSum, path);

    if (pRoot->m_pRight != NULL)
        FindPath(pRoot->m_pRight, expectSum, currentSum, path);

    path.pop_back();
}

void FindPath(BinaryTreeNode *pRoot, int expectSum)
{
    if (pRoot == NULL)
        return;
    std::vector<int> path;
    int currentSum = 0;

    cout << "result:" << endl;

    FindPath(pRoot, expectSum, currentSum, path);
}

int main()
{
    freopen("26.in", "r", stdin);

    int nLength, expectSum;

    while (scanf("%d %d",&nLength,&expectSum) != EOF)
    {
        BinaryTreeNode *pNode[nLength + 1];
        int value[nLength+1][3];

        for (int i = 1; i <= nLength; i++)
        {
            pNode[i] = new BinaryTreeNode();

            for (int j = 0; j < 3; j++)
            	scanf("%d",&value[i][j]);

            pNode[i]->m_nValue = value[i][0];
            pNode[i]->m_pLeft = NULL;
            pNode[i]->m_pRight = NULL;
            pNode[i]->id = i;
        }

        BinaryTreeNode *pRoot = pNode[1];

        for (int i = 1; i <= nLength; i++)
        {
            if (value[i][1] != -1 && value[i][2] == -1)
                ConnectBinaryTreeNode(pNode[i], pNode[value[i][1]], NULL);

            else if (value[i][1] == -1 && value[i][2] != -1)
                ConnectBinaryTreeNode(pNode[i], NULL, pNode[value[i][2]]);

            else if (value[i][1] != -1 && value[i][2] != -1 && value[i][1] <= value[i][2])
                ConnectBinaryTreeNode(pNode[i], pNode[value[i][1]], pNode[value[i][2]]);

            else if (value[i][1] != -1 && value[i][2] != -1 && value[i][1] > value[i][2])
                ConnectBinaryTreeNode(pNode[i], pNode[value[i][2]], pNode[value[i][1]]);
        }

        FindPath(pRoot, expectSum);
    }

    return 0;
}