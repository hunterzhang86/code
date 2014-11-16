#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

#define MAXN 101

int Graph[MAXN][MAXN];
int du[MAXN];
int circuit[MAXN];
int circuitPos;

void find_circuit(int i, int length)
{
    for (int j = 1; j <= length; j++)
    {
        if (Graph[i][j] == 1)
        {
            Graph[j][i] = Graph[i][j] = 0;
            find_circuit(j, length);
        }
    }

    circuit[++circuitPos] = i;
}

int main()
{
    freopen("shu.in", "r", stdin);
    int length, row, column;

    cin >> length;

    while (cin >> row >> column)
    {
        Graph[column][row] = Graph[row][column] = 1;
        du[row]++;
        du[column]++;
    }

    int start = 1;

    circuitPos = 0;

    find_circuit(start, length);

    if (circuitPos == length + 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}