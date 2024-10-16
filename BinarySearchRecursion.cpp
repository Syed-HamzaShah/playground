#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &array, int target, int start, int end);

int main()
{
    vector<int> array = {1, 2, 5, 6, 8, 9, 10};
    int size = array.size();
    int target = 9;

    int ans = BinarySearch(array, target, 0, size - 1);

    cout << ans << endl;

    return 0;
}

int BinarySearch(vector<int> &array, int target, int start, int end)
{

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array.at(mid) > target)
            return BinarySearch(array, target, start, mid - 1);

        else if (array.at(mid) < target)
            return BinarySearch(array, target, mid + 1, end);

        else
            return mid;
    }
    return -1;
}