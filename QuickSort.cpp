#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low]; // Choosing the first element as the pivot
    int i = low;          // Pointer for the smaller element
    int j = high;         // Pointer for the larger element

    // Rearrange elements based on pivot
    while (i < j)
    {
        // Increment i while arr[i] is less than or equal to pivot
        while (arr[i] <= pivot && i < high)
        {
            i++;
        }
        // Decrement j while arr[j] is greater than pivot
        while (arr[j] > pivot)
        {
            j--;
        }
        // Swap elements if i < j
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    // Swap the pivot element with arr[j] to place it in its correct position
    swap(arr[low], arr[j]);

    return j; // Return the index of the pivot
}

// QuickSort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
