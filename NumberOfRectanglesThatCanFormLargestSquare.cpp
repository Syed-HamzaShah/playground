class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int, int> m;

        for (int i = 0; i < rectangles.size(); i++) {
            int side = min(rectangles[i][0], rectangles[i][1]);
            m[side]++;
        }

        pair<int, int> ans(0, 0);

        for (auto [first, second] : m) {

            if (ans.first == 0 && ans.second == 0) {
                ans.first = first;
                ans.second = second;
            }
            else if (ans.first < first) {
                ans.first = first;
                ans.second = second;
            }
        }

        return ans.second;
    }
};