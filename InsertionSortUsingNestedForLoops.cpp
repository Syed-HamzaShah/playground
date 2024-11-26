#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    // Outer loop for each element in the array
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // The element to be positioned

        // Inner loop to find the correct position for the key
        for (int j = i; j > 0; j--)
        {
            if (arr[j - 1] > key)
            {
                arr[j] = arr[j - 1]; // Shift the larger element right
            }
            else
            {
                arr[j] = key; // Place the key in its correct position
                break;        // No need to continue the inner loop
            }
        }

        if (arr[0] > key)
        {
            arr[0] = key;
        }
    }
}

void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    printArray(arr);

    insertionSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
