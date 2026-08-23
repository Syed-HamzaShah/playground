class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;

        for(int num : nums) {
            int n = num;
            int maxDigit = 0;
            int multiplier = 0;

            while (n > 0) {
                int temp = n % 10;
                maxDigit = max(maxDigit, temp);
            
                multiplier = multiplier * 10 + 1; 
                n /= 10;
            }

            sum += (maxDigit * multiplier);
        }

        return sum;
    }
};