#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

#define maxn 101

int g[maxn][maxn];
int du[maxn];
int circuit[maxn];
int n, e, circuitpos, i, j, x, y, start;

void find_circuit(int i)
{
    int j;
    for (j = 1; j <= n; j++)
    {
        if (g[i][j] == 1)
        {
            g[j][i] = g[i][j] = 0;
            find_circuit(j);
        }
    }

    circuit[++circuitpos] = i;
}

int main()
{
    freopen("shu.in", "r", stdin);

    cin >> n;

    while(cin >> x >> y)
    {
        g[y][x] = g[x][y] = 1;
        du[x]++;
        du[y]++;
    }

    start = 1;

    for (i = 1; i <= n; i++)
        if (du[i] % 2 == 1)
        {
            start = i;
            break;
        }

    circuitpos = 0;
    find_circuit(start);

    if(circuitpos == n+1)
    	cout<<"true"<<endl;
    else
    	cout<<"false"<<endl;
    return 0;
}