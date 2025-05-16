#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.begin(), piles.end());
        int i = 0;
        int j = piles.size() - 2;
        int count = 0;

        while (i <= j)
        {
            count += piles[j];
            i++;
            j -= 2;
        }
        return count;
    }
};