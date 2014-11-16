#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int getCommonStrLength(char *pFirstStr, char *pSecondStr)
{
    int length1, length2;
    length1 = strlen(pFirstStr);
    length2 = strlen(pSecondStr);

    int count = 0;
    int maxLen = 0;

    int i, j;

    for (i = 0; i < length1; i++)
    {
        for (j = 0; j < length2; j++)
        {
            count = 0;
            int p = i;
            int q = j;

            while (pFirstStr[p] == pSecondStr[q] || (pFirstStr[p] - 'a' == pSecondStr[q] - 'A' && pFirstStr[p] >= 'a' && pFirstStr[p] <= 'z') || (pFirstStr[p] - 'A' == pSecondStr[q] - 'a' && pFirstStr[p] >= 'A' && pFirstStr[p] <= 'Z'))
            {
            	//注意这个结束符号不能计算在内
            	if(pFirstStr[p] == '\0')
            		break;

                p++;
                q++;
                count ++;
            }

            if (count > maxLen)
                maxLen = count;
        }
    }

    return maxLen;
}


int main()
{
    freopen("ggzfc.in", "r", stdin);

    char str1[1000], str2[1000];

    while (scanf("%s%s",str1,str2) != EOF)
    {
        cout << getCommonStrLength(str1, str2) << endl;
    }

    return 0;
}