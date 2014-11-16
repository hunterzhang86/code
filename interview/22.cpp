#include <iostream>
#include <stack>
#include <fstream>
using namespace std;

bool isPopOrder0(int *pPush, int *pPop, int length)
{
    if (pPush == NULL || pPop == NULL || length <= 0)
        return false;

    stack<int> stackData;

	const int* pNextPush = pPush;
	const int* pNextPop = pPop;

    while (pNextPop - pPop < length)
    {
        while (stackData.empty() || stackData.top() != *pNextPop)
        {
        	if(pNextPush - pPush == length)
        		break;

            stackData.push(*pNextPush);
            pNextPush ++;
        }

        if (stackData.top() != *pNextPop)
            break;

        stackData.pop();
        pNextPop ++;
    }

    if (stackData.empty() && pNextPop - pPop == length)
        return true;
    else
        return false;
}

bool isPopOrder1(const int* pPush, const int* pPop, int nLength)
{
	bool bPossible = false;

	if(pPush != NULL && pPop != NULL && nLength >0)
	{
		const int* pNextPush = pPush;
		const int* pNextPop = pPop;

		stack<int> stackData;

		while(pNextPop - pPop < nLength)
		{
			while(stackData.empty() || stackData.top() != *pNextPop)
			{
				if(pNextPush - pNextPop == nLength)
					break;

				stackData.push(*pNextPush);

				pNextPush ++;
			}

			if(stackData.top() != *pNextPop)
				break;

			stackData.pop();
			pNextPop ++;
		}

		if(stackData.empty() && pNextPop - pPop == nLength)
			bPossible = true;
	}

	return bPossible;
}

int main()
{
    freopen("22.in", "r", stdin);

    int length;

    while (scanf("%d", &length) != EOF)
    {
    	int *pPush = new int[length];
    	int *pPop = new int[length];

        for (int i = 0; i < length; i++)
            scanf("%d", &pPush[i]);

        for (int i = 0; i < length; i++)
            scanf("%d", &pPop[i]);

        if (isPopOrder0(pPush, pPop, length))
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}