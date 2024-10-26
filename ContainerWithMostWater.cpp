#include <vector>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxWater = 0;
        int leftPointer = 0;
        int rightPointer = height.size() - 1;

        while (leftPointer < rightPointer)
        {
            int Width = rightPointer - leftPointer;
            int Height = min(height[leftPointer], height[rightPointer]);
            int Area = Width * Height;
            maxWater = max(maxWater, Area);

            if (height[leftPointer] < height[rightPointer])
                leftPointer++;
            else
                rightPointer--;
        }

        return maxWater;
    }
};