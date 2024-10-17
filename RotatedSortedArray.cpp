#include <iostream>
using namespace std;

int main()
{
    int array[] = {6, 7, 0, 1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 3;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array[mid] == target)
            cout << mid << endl;

        if (array[start] <= array[mid]) // Left Sorted
        {
            if (array[start] <= target && target <= array[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else // Right Sorted
        {
            if (array[mid] <= target && target <= array[end])
                start = mid + 1;
            else
                end = mid + 1;
        }
    }

    return 0;
}