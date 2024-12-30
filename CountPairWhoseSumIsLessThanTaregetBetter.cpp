#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int n = nums.size();
        int i = 0, j = n - 1;

        while (i < j) {
            if (nums[i] + nums[j] < target) {
                ans += (j - i);
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};
