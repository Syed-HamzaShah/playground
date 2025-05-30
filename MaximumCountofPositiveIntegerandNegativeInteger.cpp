class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        // Find first non-negative (>= 0)
        int left = 0, right = n - 1, firstNonNegative = n;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] >= 0) {
                firstNonNegative = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        // Find first positive (> 0)
        left = 0, right = n - 1;
        int firstPositive = n;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] > 0) {
                firstPositive = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        int negativeCount = firstNonNegative;
        int positiveCount = n - firstPositive;

        return max(negativeCount, positiveCount);
    }
};
