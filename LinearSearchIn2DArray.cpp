#include <iostream>
using namespace std;

pair<int, int> linearSearch(int matric[][3], int rows, int columns, int target)
{
    pair<int, int> ans = {-1, -1};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (target == matric[i][j])
            {
                ans.first = i;
                ans.second = j;
            }
        }
    }

    return ans;
}

int main()
{
    int array[4][3] = {{1, 2, 3}, {4, 5, 6}, {6, 7, 8}, {9, 10, 11}};
    int rows = 4;
    int columns = 3;

    int target = 10;

    pair<int, int> ans = linearSearch(array, rows, columns, target);

    if (ans.first != -1)
        cout << "The indexes are : " << ans.first << " & " << ans.second << endl;
    else
        cout << "Not found!";

    return 0;
}