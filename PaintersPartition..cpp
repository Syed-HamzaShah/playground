#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> &array, int painters, int max)
{
    int painter = 1;
    int painting = 0;

    for (int i = 0; i < array.size(); i++)
    {
        if (painting + array[i] <= max)
            painting += array[i];
        else
        {
            painter++;
            painting = array[i];
        }
    }

    return painter > painters ? false : true;
}

int allocatedPaintings(vector<int> &array, int painters)
{
    int sum = 0;
    int maxVal = 0;

    for (int i = 0; i < array.size(); i++)
    {
        sum += array[i];
        maxVal = max(maxVal, array[i]);
    }

    if (array.size() < painters)
        return -1;

    int ans = -1;
    int start = maxVal;
    int end = sum;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(array, painters, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
            start = mid + 1;
    }
    return ans;
};

int main()
{
    vector<int> array = {40, 30, 10, 20};
    int painter = 2;

    cout << allocatedPaintings(array, painter) << endl;

    return 0;
}