class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n);

        if (k == 0)
            return vector<int>(n, 0);

        if (k > 0) {
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = i + 1; j <= i + k; j++) {
                    sum += code[j % n];
                }
                ans[i] = sum;
            }
        } else {
            k = -k;
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = i - 1; j >= i - k; j--) {
                    int idx = ((j % n) + n) % n;
                    sum += code[idx];
                }
                ans[i] = sum;
            }
        }

        return ans;
    }
};
