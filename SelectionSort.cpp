#include <iostream>
using namespace std;

int main()
{
    int array[] = {4, 1, 5, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[smallest])
            {
                smallest = j;
            }
        }
        swap(array[i], array[smallest]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }

    return 0;
}