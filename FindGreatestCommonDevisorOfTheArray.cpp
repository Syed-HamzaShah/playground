class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX, largest = INT_MIN;

        for (int num : nums) {
            smallest = min(smallest, num);
            largest = max(largest, num);
        }

        return gcd(largest, smallest);
    }

private:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};
