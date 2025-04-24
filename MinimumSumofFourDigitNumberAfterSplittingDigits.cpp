#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minimumSum(int num)
    {
        vector<int> a;
        for (int i = 0; i < 4; i++)
        {
            int temp = num % 10;
            a.push_back(temp);
            num /= 10;
        }
        sort(a.begin(), a.end());
        int num1 = (a[0] * 10) + a[3];
        int num2 = (a[1] * 10) + a[2];
        return num1 + num2;
    }
};