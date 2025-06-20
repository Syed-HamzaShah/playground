class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        for (int i = 0; i < n - 1; i++) {
            int maxIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (score[j][k] > score[maxIdx][k]) {
                    maxIdx = j;
                }
            }
            if (maxIdx != i) {
                swap(score[i], score[maxIdx]);
            }
        }

        return score;
    }
};
