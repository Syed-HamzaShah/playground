class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int num = 1;
        int top = 0, bottom = n;
        int left = 0, right = n;

        while (top < bottom && left < right) {
            // Fill top row
            for (int i = left; i < right; i++) {
                ans[top][i] = num++;
            }
            top++;

            // Fill right column
            for (int i = top; i < bottom; i++) {
                ans[i][right - 1] = num++;
            }
            right--;

            // Fill bottom row
            if (top < bottom) {
                for (int i = right - 1; i >= left; i--) {
                    ans[bottom - 1][i] = num++;
                }
                bottom--;
            }

            // Fill left column
            if (left < right) {
                for (int i = bottom - 1; i >= top; i--) {
                    ans[i][left] = num++;
                }
                left++;
            }
        }

        return ans;
    }
};
