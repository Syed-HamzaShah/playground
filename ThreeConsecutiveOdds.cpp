#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        if (arr.size() < 3)
            return false;
        int a, b, c;
        a = 0;
        b = 1;
        c = 2;

        while (a < arr.size() - 2)
        {
            if (arr[a] % 2 == 1 && arr[b] % 2 == 1 && arr[c] % 2 == 1)
                return true;
            if (arr[a] % 2 == 0 && arr[b] % 2 == 0 && arr[c] % 2 == 0)
                a += 3, b += 3, c += 3;
            else if (arr[c] % 2 == 1 && arr[b] % 2 == 0 && arr[a] % 2 == 0)
                a += 2, b += 2, c += 2;
            else
                a++, b++, c++;
        }
        return false;
    }
};