#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

#define max(a, b) (a) > (b) ? (a) : (b)

using namespace std;

struct node{
	int a;
	int b;
}q[1111];

int n;

int map[1111][1111];

int d[1111];

bool Judge(int i, int j)
{
	if (q[i].a < q[j].a && q[i].b < q[j].b || q[i].a < q[j]. b && q[i].b < q[j].a)
	{
		return true;
	}
	return false;
}

int dp(int i)
{
    int &ans=d[i];
	if (d[i] > 0)
	{
		return  d[i];
	}
	ans = 1;
	for (int j = 0; j < n; j++)
	{
		if (map[j][i])
		{
			ans = max(ans, dp(j) + 1);
		}
	}
	return ans;
}

int main()
{
    freopen("16.in","r",stdin);
	int T;
	scanf("%d", &T);
	while (T--)
	{
		memset(map, 0, sizeof(map));
		scanf("%d", &n);
//		if (n == 0)
//		{
//			printf("-1\n");
//			continue;
//		}
		for (int i = 0; i < n; i++)
		{
			scanf("%d%d",&q[i].a, &q[i].b);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (Judge(i, j))
				{
//					cout << "i = " << i << " " << "j = " << j << endl;
					map[i][j] = 1;
				}
			}
		}
		int t = 0;
		memset(d, 0, sizeof(d));
		for (int i = 0; i < n; i++)
		{
			d[i] = dp(i);
//			printf("dp[%ds] = %d", i + 1, d[i]);
//			cout << endl;
			t = max(t, d[i]);
		}
		printf("%d\n", t);
	}
//	system("pause");
	return 0;
}
