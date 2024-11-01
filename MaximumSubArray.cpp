#include <iostream>
using namespace std;

int main()
{
    int array[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(array) / sizeof(int);

    int maxSum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        int currSum = 0;
        for (int j = i; j < size; j++)
        {
            currSum += array[j];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "Max Subarray sum = " << maxSum << endl;

    return 0;
}