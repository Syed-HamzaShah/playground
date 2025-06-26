#include <vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorAll = 0;

        // Step 1: XOR all numbers to get xor = x ^ y
        for (int num : nums) {
            xorAll ^= num;
        }

        // Step 2: Safely find rightmost set bit (even if xorAll == INT_MIN)
        unsigned int diffBit = xorAll & -static_cast<unsigned int>(xorAll);

        // Step 3: Divide into two groups and XOR again
        int x = 0, y = 0;
        for (int num : nums) {
            if (num & diffBit) {
                x ^= num;  // group with the bit set
            } else {
                y ^= num;  // group with the bit not set
            }
        }

        return {x, y};  // the two unique numbers
    }
};
