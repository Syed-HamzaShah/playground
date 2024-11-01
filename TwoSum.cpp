#include <iostream>
using namespace std;

int main()
{
    int array[] = {2, 7, 11, 15};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 17;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}