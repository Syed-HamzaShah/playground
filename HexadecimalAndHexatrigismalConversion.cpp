class Solution {
public:
    string toBase(long long num, int base) {
        if (num == 0) return "0";

        string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string res = "";

        while (num > 0) {
            int rem = num % base;
            res.push_back(digits[rem]);
            num /= base;
        }

        reverse(res.begin(), res.end());
        return res;
    }

    string concatHex36(int n) {
        long long sq = 1LL * n * n;
        long long cube = sq * n;

        string ans1 = toBase(sq, 16);
        string ans2 = toBase(cube, 36);

        return ans1 + ans2;
    }
};
