#include <iostream>
using namespace std;

void insertValue(int arr[], int &size, int value, int index)
{

    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    size++;
}

void deleteValue(int arr[], int &size, int index)
{

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;
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
    int capacity = 10;
    int arr[capacity] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original array: ";
    printArray(arr, size);

    insertValue(arr, size, 99, 2);
    cout << "Array after insertion: ";
    printArray(arr, size);

    deleteValue(arr, size, 3);
    cout << "Array after deletion: ";
    printArray(arr, size);

    return 0;
}