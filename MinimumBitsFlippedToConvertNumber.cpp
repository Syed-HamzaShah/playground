class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flippedBits = start ^ goal;
        int count = 0;

        while (flippedBits > 0) {
            count += (flippedBits & 1);
            flippedBits >>= 1;          
        }

        return count;
    }
};
