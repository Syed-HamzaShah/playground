#include <iostream>
using namespace std;

int main()
{
    int size = 6;
    int array[size] = {0, 3, 8, 9, 5, 2};

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (array[mid - 1] < array[mid] && array[mid] > array[mid + 1])
            cout << mid;
        else if (array[mid - 1] < array[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return 0;
}