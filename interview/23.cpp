#include <iostream>
#include <deque>
#include <fstream>
using namespace std;

struct BinaryTreeNode
{
    int m_nValue;
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

//层次遍历
void PrintBinaryTreeByLevel(BinaryTreeNode *pRoot)
{
    if (pRoot == NULL)
        return;

    deque<BinaryTreeNode *> dequeTreeNode;

    dequeTreeNode.push_back(pRoot);

    printf("%d", pRoot->m_nValue);

    while(dequeTreeNode.size())
    {
    	BinaryTreeNode* pNode = dequeTreeNode.front();

    	//pop_back():删除最后一个元素
    	dequeTreeNode.pop_front();

    	if(pNode != pRoot)
    		printf(" %d", pNode->m_nValue);

    	if(pNode->m_pLeft != NULL)
    		dequeTreeNode.push_back(pNode->m_pLeft);

    	if(pNode->m_pRight != NULL)
    		dequeTreeNode.push_back(pNode->m_pRight);
    }

    printf("\n");
}

//前序遍历
void PrintBinaryTreeByDLR(BinaryTreeNode *pRoot)
{
	if(pRoot == NULL)
		return;

	printf("%d ",pRoot->m_nValue);

	if(pRoot->m_pLeft != NULL)
		PrintBinaryTreeByDLR(pRoot->m_pLeft);
	if(pRoot->m_pRight != NULL)
		PrintBinaryTreeByDLR(pRoot->m_pRight);
}

int main()
{
    freopen("23.IN", "r", stdin);

    int nLength;
    int value;
    char ch[10];

    while (scanf("%d", &nLength) != EOF)
    {
        BinaryTreeNode *pNode[nLength+1];

        for (int i = 1; i <= nLength; i++)
        {
            scanf("%d", &value);

            pNode[i] = new BinaryTreeNode();
            pNode[i]->m_nValue = value;
            pNode[i]->m_pLeft = NULL;
            pNode[i]->m_pRight = NULL;
        }


        BinaryTreeNode *pRoot = CreatBinaryTree(pNode[1]);

        for (int i = 1; i <= nLength; i++)
        {
            scanf("%s", ch);

            if (ch[0] == 'd')
            {
                int indexLeft;
                int indexRight;

                scanf("%d%d", &indexLeft, &indexRight);

                ConnectBinaryTreeNode(pNode[i], pNode[indexLeft], pNode[indexRight]);
            }

            else if (ch[0] == 'l')
            {
                int indexLeft;

                scanf("%d", &indexLeft);

                ConnectBinaryTreeNode(pNode[i], pNode[indexLeft], NULL);
            }

            else if (ch[0] == 'r')
            {
                int indexRight;

                scanf("%d", &indexRight);

                ConnectBinaryTreeNode(pNode[i], NULL, pNode[indexRight]);
            }

            else if (ch[0] == 'z')
           		continue;
        }

        PrintBinaryTreeByLevel(pRoot);
    }

    return 0;
}