class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int freq[101] = {};

        for (int x : nums)
            freq[x]++;

        int res = 0;

        for (int x = 1; x <= 100; x++) {
            if (freq[x] == 3) {
                int first = -1;
                int second = -1;
                int third = -1;

                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == x) {
                        if (first == -1)
                            first = i;
                        else if (second == -1)
                            second = i;
                        else {
                            third = i;
                            break;
                        }
                    }
                }

                if (second - first == third - second)
                    res++;
            }
        }

        return res;
    }
};