#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

#define max(a, b) (a) > (b) ? (a) : (b)

using namespace std;

struct node{
	int a;
	int b;
}q[1000];

int n;

int map[1000][1000];

int d[1000];

bool Judge(int i, int j)
{
	if ((q[i].a < q[j].a && q[i].b < q[j].b )||( q[i].a < q[j]. b && q[i].b < q[j].a))
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
	ans=1;
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
					map[i][j] = 1;
				}
			}
		}
		int t =-1;
		memset(d, 0, sizeof(d));
		for (int i = 0; i < n; i++)
		{
			t = max(t, dp(i));
		}
		printf("%d\n", t);
	}
	return 0;
}
