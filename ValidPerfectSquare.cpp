class Solution {
public:
    bool isPerfectSquare(int num) {
        long long start = 1;
        long long end = num;
        while (start <= end) {
            long long mid = start + (end - start) / 2;
            long long sq = mid * mid;
            if (sq == num) return true;
            else if (sq > num) end = mid - 1;
            else start = mid + 1;
        }
        return false;
    }
};
