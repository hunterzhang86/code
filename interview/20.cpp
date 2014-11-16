#include <iostream>
#include <fstream>
using namespace std;

void PrintNumber(int number)
{
    printf("%d ", number);
}

void PrintMatrixInCircle(int **numbers, int columns, int rows, int start)
{
    if (numbers == NULL || columns <= 0 || rows <= 0)
        return;

    //rows代表行数，columns代表列数

    int endX = columns - 1 - start;
    int endY = rows - 1 - start;

    for (int i = start; i <= endX; i++)
    {
        int number = numbers[start][i];
        PrintNumber(number);
    }

    if (start < endY)
    {
        for (int i = start + 1; i <= endY; i++)
        {
            int number = numbers[i][endX];
            PrintNumber(number);
        }
    }

    if (start < endX && start < endY)
    {
        for (int i = endX - 1; i >= start; i--)
        {
            int number = numbers[endY][i];
            PrintNumber(number);
        }
    }

    if (start <endX && start < endY-1)
    {
        for (int i = endY-1; i >= start + 1; i--)
        {
            int number = numbers[i][start];
            PrintNumber(number);
        }
    }

}

void PrintMatrixClockWisely(int **numbers, int columns, int rows)
{
    if (numbers == NULL || columns <= 0 || rows <= 0)
        return;

    int start = 0;

    while (columns > start * 2 && rows > start * 2)
    {
        PrintMatrixInCircle(numbers, columns, rows, start);
        start++;
    }
}

int main()
{
    freopen("20.in", "r", stdin);

    int rows, columns;

    while (scanf("%d%d",&rows, &columns) != EOF)
    {
        int **numbers = new int *[rows];
        for (int i = 0; i < rows; ++i)
        {
            numbers[i] = new int[columns];
            for (int j = 0; j < columns; ++j)
            {
                scanf("%d", &numbers[i][j]);
            }
        }

        PrintMatrixClockWisely(numbers, columns, rows);
        printf("\n");

        for (int i = 0; i < rows; ++i)
            delete[] (int *)numbers[i];

        delete[] numbers;
    }

    return 0;
}