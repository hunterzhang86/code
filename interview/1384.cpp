#include <iostream>
#include <fstream>
using namespace std;

bool findNum(int *matrix, int rows, int cols, int num)
{
    int found = false;
    if(matrix != NULL && rows > 0 && cols > 0)
    {
        int row = 0;
        int col = cols -1 ;
        while(row < rows && col >= 0)
        {
            if(matrix[row*cols + col] == num)
            {
                found = true;
                return found;
            }

            else if(matrix[row*cols+col] < num)
            {
                row++;
            }
            else{
                col--;
            }
        }
    }
    return found;
}

int matrix[1001*1001];

int main()
{
    freopen("1384.in","r",stdin);
    int rows, cols;
    int num;
    while(scanf("%d %d",&rows,&cols)!=EOF)
    {
        scanf("%d",&num);
        for(int i=0;i<rows*cols;i++)
                scanf("%d",matrix+i);
        if(findNum(matrix, rows, cols, num))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
