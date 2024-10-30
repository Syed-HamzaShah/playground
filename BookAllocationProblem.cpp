#include <iostream>
#include <vector>
using namespace std;

int allocateBooks(vector<int> &arr, int books, int students);

bool isValid(vector<int> arr, int books, int students, int maxPages);

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int books = 4;
    int students = 2;

    cout << allocateBooks(arr, books, students) << endl;

    return 0;
}
int allocateBooks(vector<int> &arr, int books, int students)
{
    if (students > books)
        return -1;

    int sum = 0;

    for (int i = 0; i < books; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int start = 0;
    int end = sum;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(arr, books, students, mid) == true)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return ans;
}

bool isValid(vector<int> arr, int books, int students, int maxPages)
{
    int st = 1;
    int pg = 0;

    for (int i = 0; i < books; i++)
    {
        if (arr[i] > maxPages)
            return false;

        if (pg + arr[i] <= maxPages)
            pg += arr[i];
        else
        {
            st++;
            pg = arr[i];
        }
    }

    if (st > students)
        return false;
    else
        return true;
}