#include <iostream>
#include <fstream>
using namespace std;

void PrintMatrix(int **numbers, int rows, int columns)
{
    if (numbers == NULL || rows <= 0 || columns <= 0)
        return;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            printf("%d\t", numbers[i][j]);
        printf("\n");
    }
}

int main()
{
    freopen("20.in", "r", stdin);

    int rows, columns;

    while (scanf("%d%d", &rows, &columns) != EOF)
    {
        int **numbers = new int *[rows];    //定义一个一维指针数组
        for (int i = 0; i < rows; ++i)
        {
            numbers[i] = new int[columns];  //每一个指针指向一个一维数组
            for (int j = 0; j < columns; ++j)
            {
                scanf("%d", &numbers[i][j]);
            }
        }

        PrintMatrix(numbers, rows,  columns );  //输出二维数组

        for (int i = 0; i < rows; ++i)  //释放二维数组占用的空间
            delete[] (int *)numbers[i];

        delete[] numbers;
    }

    return 0;
}