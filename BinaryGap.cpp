class Solution {
public:
    int binaryGap(int n) {
        vector<int> bits;
        int last = -1;
        int maxGap = 0;

        while (n > 0) {
            bits.push_back(n & 1);
            n >>= 1;
        }

        for (int i = 0; i < bits.size(); i++) {
            if (bits[i] == 1) {
                if (last != -1)
                    maxGap = max(maxGap, i - last);
                last = i;
            }
        }

        return maxGap;
    }
};