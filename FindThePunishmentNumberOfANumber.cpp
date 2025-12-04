class Solution {
public:
    bool partition(int i, int sum, int target, const string &str) {
        if (i == str.length())
            return sum == target;

        int curr = 0;
        for (int j = i; j < str.length(); j++) {
            curr = curr * 10 + (str[j] - '0');
            if (partition(j + 1, sum + curr, target, str))
                return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            string s = to_string(i * i);
            if (partition(0, 0, i, s))
                ans += i * i;
        }
        return ans;
    }
};
