class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> losses;

        for (int i = 0; i < matches.size(); i++) {

            int winner = matches[i][0];
            int loser  = matches[i][1];

            if (losses.find(winner) == losses.end()) 
                losses[winner] = 0;

            losses[loser]++;
        }

        vector<vector<int>> ans(2);

        for (auto &[player, lossCount] : losses) {

            if (lossCount == 0) 
                ans[0].push_back(player);
            else if (lossCount == 1) 
                ans[1].push_back(player);
        }

        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());

        return ans;
    }
};