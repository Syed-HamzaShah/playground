#include <iostream>
using namespace std;

int main()
{

    int array[] = {1, 2, 2, 1, 1, 2, 2};
    int size = sizeof(array) / sizeof(int);

    int ans;

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            ans = array[i];
        }
    }

    cout << ans << endl;
    return 0;
}