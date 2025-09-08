class Solution {
public:
    bool hasZero(int x) {
        while (x > 0) {
            if (x % 10 == 0) return true;
            x /= 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        int i = 1, j = n - 1;

        while (i <= j) {
            if (!hasZero(i) && !hasZero(j)) return {i, j};
            i++;
            j--;
        }
        return {};
    }
};
