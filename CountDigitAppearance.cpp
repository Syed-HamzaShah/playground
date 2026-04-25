class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        
        for (int n : nums) {
            if (n == 0 && digit == 0) {
                count++;
                continue;
            }
            
            while (n > 0) {
                if (n % 10 == digit)
                    count++;
                n /= 10;
            }
        }
        
        return count;
    }
};