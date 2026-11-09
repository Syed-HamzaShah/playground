
class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i += 2) {
            int a = nums[i];
            int b = nums[i + 1];

            int temp = b;
            int digits = 0;

            while (temp > 0) {
                digits++;
                temp /= 10;
            }

            int merged = a;

            while (digits--) {
                merged *= 10;
            }

            merged += b;

            ans = min(ans, merged);
        }

        return ans;
    }
};
