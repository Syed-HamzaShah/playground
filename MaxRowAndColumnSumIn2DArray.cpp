#include <iostream>
using namespace std;

void maxRowSum(int matric[][3], int rows, int columns)
{
    int rowSum = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        int currSum = 0;
        for (int j = 0; j < columns; j++)
        {
            currSum += matric[i][j];
        }
        rowSum = max(currSum, rowSum);
    }

    cout << "MaxRowSum is : " << rowSum << endl;
}

void maxColumnSum(int matric[][3], int rows, int columns)
{
    int columnSum = INT_MIN;

    for (int j = 0; j < columns; j++)
    {
        int currSum = 0;
        for (int i = 0; i < rows; i++)
        {
            currSum += matric[i][j];
        }
        columnSum = max(currSum, columnSum);
    }

    cout << "MaxColumnSum is : " << columnSum << endl;
}

int main()
{
    int array[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;

    maxRowSum(array, rows, columns);

    maxColumnSum(array, rows, columns);

    return 0;
}