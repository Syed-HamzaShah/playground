class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int i = 1; i <= 60; i++) {
            long long diff = (long long)num1 - (long long)i * num2;

            if (diff < 0) continue;

            int bits = __builtin_popcountll(diff);

            if (diff >= i && bits <= i) return i;
        }
        return -1;
    }
};
