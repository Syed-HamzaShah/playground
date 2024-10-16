#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 4, 6, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 4;

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;//optimized for overflow incase the value is int max or min max

    while (start <= end)
    {

        if (array[mid] > target)
            end = mid - 1;

        if (array[mid] < target)
            start = mid + 1;

        if (array[mid] == target)
        {
            cout << mid;
            break;
        }
    }

    return 0;
}